void loop()
{  
  nam="";
  if(Serial3.available()>0)
  {
/*    if(Serial3.read()==9)
    {
     check(); 
     Serial3.write((char)(id));      
    }*/
    
    delay(100);
     b1=Serial3.read();
    delay(100);
     b2=Serial3.read();
     val=b2+b1*256;
 // Serial.print("     ");
  //Serial.println(val);
  //.setTextColor(BLUE);
  //tft.print(b1);
  if(val>0)
   extract();  
  
  }

  
  TSPoint p = ts.getPoint();
        
   pinMode(XM, OUTPUT);
   pinMode(YP, OUTPUT);
  
   if (p.z > MINPRESSURE && p.z < MAXPRESSURE) 
   {
    
    posy = map(p.x, TS_MINX, TS_MAXX, tft.height(), 0);
    posx = map(p.y, TS_MINY, TS_MAXY, tft.width(), 0);

/*
                    //....................................................
                        Serial.print("X :   "); Serial.print(posx);     
                        Serial.print("  |||  ");                        
                        Serial.print("Y :   "); Serial.println(posy);    
                    //....................................................
                    
*/

   if(posx>0  && posx<400 )
   {
    if(posy>0  && posy<240)
    {
       buzar(1,180);

       if(flag_rec==1)
       {
       pg_2();
       data();
       

                for(int i=0;i<16;i++)  // eeprom write.
                 {
                   EEPROM.update(i,vcount[i]);
                 }
                 
       }

       else
       {
        tft.fillScreen(BLACK);
        tft.setTextColor(WHITE);
        tft.setTextSize(2);
        tft.setCursor(80,120);
        tft.print("PLEASE CONFIGURE FIRST");
        buzar(2,200);
        delay(3000);
        front();
       }
    }
   }

/*
   if(posx>0  && posx<100 )
   {
    if(posy>0  && posy<100)
    {
       clear_eeprom();
       front();
    }
    
   }
   
*/   
   }

if(digitalRead(48) == HIGH)      //showing the sd database content on pressing the 1st button.
{
  tft.fillScreen(WHITE);
  tft.setCursor(0,10);

  tft.setTextSize(2);
  myFile = SD.open("database.csv");
  while (myFile.available())
  {
  tft.write(myFile.read());
  }
  myFile.close();
  delay(4000);
  front(); 
}

}
