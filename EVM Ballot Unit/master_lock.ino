void msl()
{
  
   tft.fillScreen(BLACK);
  
  tft.setTextColor(WHITE);
  tft.setTextSize(2);

   tft.fillRoundRect(20,40,190,160,20,GREEN);
   tft.setCursor(40,110);
   tft.print("Enroll");
 
   tft.fillRoundRect(240,40,130,160,20,RED);
   tft.setCursor(280,110);
   tft.print("EXIT");

   tft.fillRoundRect(0,0,40,40,10,RED);
   //tft.setCursor(280,110);

 while(1)
 {
  TSPoint  p = ts.getPoint();
        
   pinMode(XM, OUTPUT);
   pinMode(YP, OUTPUT);
  
   if (p.z > MINPRESSURE && p.z < MAXPRESSURE) 
   {
    
    posy = map(p.x, TS_MINX, TS_MAXX, tft.height(), 0);
    posx = map(p.y, TS_MINY, TS_MAXY, tft.width(), 0);


   if(posx>20  && posx<220 )
   {
    if(posy> 40 && posy<220)
    {
       buzar(1,200);
       enroll();
       buzar(1,200);
       break;
    }
    
   }

   if(posx>240  && posx<380 )
   {
    if(posy> 40 && posy<220)
    {
      buzar(1,200);
       break;
    }
    
   }

    if(posx>0  && posx<50 )
   {
    if(posy>0 && posy<50)
    {
      EEPROM.update(99,4);
       break;
    }
   }
   
   
   }
   
 }
 
}

