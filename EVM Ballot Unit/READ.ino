void extract()
{  

  buzar(2,200);
  
  int x=230;

  if(val!=1)
  {
  cat = val%10;
  val = val/10;
  //Serial.println(cat);

        tft.fillScreen(GREEN);
        tft.setTextColor(BLACK);
        tft.setTextSize(2);
        tft.setCursor(100,100);
        tft.print("CATEGORIES*: ");
        tft.setCursor(250,100);
        tft.print(cat);

        tft.setCursor(100,150);
        tft.print("SUB-CAT: ");
  
  for(int i=0;i<cat;i++)
  {
   subcat[i] = val%10;
   val = val/10;
  // Serial.print(subcat[i]);

        tft.setCursor(x,150);
        tft.print(subcat[i]);

   x+=30;
        
  }

         flag_rec=1;
   
  }
  else
  {
    clear_eeprom();
    
    for(int i=0;i<100;i++)
      vcount[i] = 0;

    flag_rec=0;  

    //front();
  }

   delay(4000);
  front();
  
}

