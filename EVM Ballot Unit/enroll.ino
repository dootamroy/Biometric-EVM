void enroll()
{
  vcount[99] = EEPROM.read(99);
  enrollid = vcount[99]+1;
  tft.fillScreen(WHITE);
  tft.setTextSize(2);
  //tft.setCursor(200,100);
  tft.setTextColor(BLACK);

  fps.Open();         //send serial command to initialize fps
  fps.SetLED(true);   //turn on LED so fps can see fingerprint


 
  tft.setCursor(80,105);
  tft.print("PLEASE PLACE YOUR FINGER");
  tft.setCursor(50,50);
  tft.print(enrollid);
  
while(1)
{
    
    if (fps.IsPressFinger())
  {
    fps.CaptureFinger(false);
    id = fps.Identify1_N();
    break;
  } 
}  
    if (id <enrollid)
    {
      error();
//      break;
    }
 
  else
  {
    fps.DeleteID(enrollid);
    
  fps.EnrollStart(enrollid);
  
  while(fps.IsPressFinger() == false) delay(100);
  bool bret = fps.CaptureFinger(true);
  int iret = 0;
  if (bret != false)
  {
    
    
    tft.fillScreen(WHITE);
    tft.setCursor(80,105);
    tft.print("Remove finger");
    
    fps.Enroll1(); 
    
    while(fps.IsPressFinger() == true) delay(100);

    tft.fillScreen(WHITE);
    tft.setCursor(80,105);
    tft.print("Press same finger again");
    
    while(fps.IsPressFinger() == false) delay(100);
    bret = fps.CaptureFinger(true);
    if (bret != false)
    {
      tft.fillScreen(WHITE);
      tft.setCursor(80,105);
    tft.print("Remove finger");
      fps.Enroll2();
      while(fps.IsPressFinger() == true) delay(100);

      tft.fillScreen(WHITE);
      tft.setCursor(80,105);
    tft.print("Press same finger again");
    
      while(fps.IsPressFinger() == false) delay(100);
      bret = fps.CaptureFinger(true);
      if (bret != false)
      {
        tft.fillScreen(WHITE);
        tft.setCursor(80,105);
        tft.print("Remove finger");
        iret = fps.Enroll3();
        if (iret == 0)
        {
          EEPROM.update(99, enrollid);
          keyboard();
          //break;
        }
        else
        {
          tft.fillScreen(WHITE);
          tft.setCursor(80,105);
          tft.print("Enrolling failed with error code:");
          tft.setCursor(80,105);
          tft.print(iret);
        }
      }
      else {
        tft.fillScreen(WHITE);
        tft.setCursor(80,105);
       tft.print("Failed to capture first finger");
      }
    }
    else {
      tft.fillScreen(WHITE);
      tft.setCursor(80,105);
    tft.print("Failed to capture second finger");
    }
  }
  else {
    tft.fillScreen(WHITE);
    tft.setCursor(80,105);
    tft.print("Failed to capture third finger");
  }
  }
fps.SetLED(false);

//keyboard();
}

