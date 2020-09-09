void displ()
{String SEX;

  tft.fillScreen(WHITE);
  tft.setTextColor(BLACK);
  /*
  tft.setCursor(8,60);                                                                         
  tft.print(age1);
  */
  
  tft.fillRoundRect(100,60,80,80,12,RED);
  tft.setCursor(110,70);
  tft.print("MALE");
  
  tft.fillRoundRect(290,60,80,80,12,BLUE);
  tft.setCursor(300,70);
  tft.print("FEMALE");


  while(1)
  {
   TSPoint  p = ts.getPoint();
        
   pinMode(XM, OUTPUT);
   pinMode(YP, OUTPUT);
  
   if (p.z > MINPRESSURE && p.z < MAXPRESSURE) 
   {
    
    posy = map(p.x, TS_MINX, TS_MAXX, tft.height(), 0);
    posx = map(p.y, TS_MINY, TS_MAXY, tft.width(), 0);

    
    if(posx>100  && posx<180 )
   {
      if(posy> 60 && posy<150)
      {
        SEX = "Male";    //MALE
        buzar(1,170);
        break;
      }
   }

   

   if(posx>290  && posx<370 )
   {
      if(posy> 60 && posy<150)
      {
        SEX = "Female";    //FEMALE
        buzar(1,170);
        break;
      }
   }

   }
  }


 tft.fillScreen(WHITE);
  tft.setCursor(80,60);                                                                         
  tft.print(nam);
  tft.setCursor(80,100);                                                                         
  tft.print(age1);
  tft.setCursor(80,140);                                                                         
  //if(SEX == "Male")
  tft.print(SEX);
 // else
 // tft.print("FEMALE");
  
  sd_push(nam,age1,SEX);
  buzar(3,120);
  
  //delay(500);
  //return;
}
