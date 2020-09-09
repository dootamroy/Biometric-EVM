void set()
{
  count_cat = 0;
  tft.fillScreen(WHITE);
  tft.setTextSize(2);
  tft.setTextColor(BLACK);
  tft.setCursor(20,20);
  tft.print("ENTER NUMBER OF CATEGORIES : ");
  tft.setCursor(140,50);
  tft.setTextColor(RED);
  tft.print("(MAX 3)");
  tft.fillRect(140,200,40,40,BLUE);
  tft.setCursor(150,210);
  
  tft.setTextColor(WHITE);
  tft.print(count_cat);
  
  for(;;)
  { 


    
   if(digitalRead(c_btn[2]==HIGH))
   break;
   
   if(digitalRead(c_btn[3])==HIGH)
   {
    count_cat++;
    if(count_cat>3)
     count_cat=3;
     delay(100);
    //tft.print(count_cat);
    continue;
   }
   
   else if(digitalRead(c_btn[4])==HIGH)
   {
    count_cat--;
     if(count_cat<0)
     count_cat=0;
     delay(100);
    //tft.print(count_cat);
    continue;
   }

   
    tft.fillRect(140,200,40,40,BLUE);
   tft.setCursor(150,210);
   tft.print(count_cat,BLUE);    
  }
  scrn();
}

