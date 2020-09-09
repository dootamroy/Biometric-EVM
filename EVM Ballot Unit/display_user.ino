void display_user(int id)
{
  tft.fillScreen(BLACK);
  tft.setTextColor(WHITE);
  tft.setTextSize(2);

  tft.setCursor(70,80);
  tft.print("NAME:"); 
 // tft.setCursor(130,80);
  //tft.print(Name[id]);

  tft.setCursor(70,120);
  tft.print("AGE:");
//  tft.setCursor(130,120);
 // tft.print(age[id]);

  tft.setCursor(70,160);
  tft.print("GENDER:");
 // tft.setCursor(155,160);
 // tft.print(gender[id]);
 
  
  tft.setCursor(70,200);
  tft.print("ID:");
  tft.setCursor(130,200);
  tft.print(id);

  sd_pop(id);   //read from sd card and print.
  
  delay(3000);

  if(id==0 || id==1 || id==2 || id==3)
    msl();

  else  
  ready_();
  
}

