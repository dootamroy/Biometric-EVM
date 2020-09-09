void data()
{

  /*
  Name[0] = "ARIF SHAIKH";
  age[0]=19;
  gender[0]="MALE";
  
  Name[1] = "RODDSI SARKAR";
  age[1]=19;
  gender[1]="FEMALE";
  
  Name[2] = "SUDIPTO GHOSH";
  age[2]=19;
  gender[2]="MALE";
  
  Name[3] = "SHUBHRANIL CHAKRABORTY";
  age[3]=19;
  gender[3]="MALE";

  Name[4] = "DOOTAM ROY";
  age[4]=19;
  gender[4]="MALE";

  Name[5]="SUMAN SIR";
  age[5]=58;
  gender[5]="MALE";

  Name[6]="ABHIJIT SIR";
  age[6]=40;
  gender[6]="MALE";

  Name[7]="XYZ";
  age[7] = 1000;
  gender[7] = "NIL";

*/
  
 fps.SetLED(true); //turn on fps led.

 
while(1)
{
    
    if (fps.IsPressFinger())
  {
    fps.CaptureFinger(false);
    id = fps.Identify1_N();
    
     
    if (id <200)
    {
      fps.SetLED(false);   //turn off fps led.
      
    /*
      if(id==0 || id==1)
      {
        id=0;
      }
      if(id==2 || id==3)
      {
        id=1;
      }
      if(id==4 || id==5)
      {
        id=2;
      }
      if(id==6 || id==7)
      {
        id=3;
      }
      if(id==8 || id==9)
      {
        id=4;
      }

      if(id==10 || id==11)
      {
        id=5;
      }
      if(id==12 || id==13)
      {
        id=6;
      }
      */
      if(vcount[id+6]==2)
      {
         tft.fillScreen(YELLOW);
         tft.setTextColor(BLACK);
         tft.setTextSize(2);

         
         tft.setCursor(110,110);
         tft.print("YOU HAVE ALREADY");
         tft.setCursor(110,140);
         tft.print("GIVEN YOUR VOTE");

         
         buzar(3,200);
         delay(3000);
         loop();
      }
      else   
      display_user(id);  //display user info in the lcd. 
      
      front();
      break;
    }

    
    else
    {
      //if unable to recognize
      error();
      
    }
    
  }
  
}


}
