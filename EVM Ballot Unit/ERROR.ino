void error()
{
  tft.fillScreen(RED);
  tft.setTextColor(BLACK);

  tft.fillCircle(202,105,65,WHITE);
  tft.fillRoundRect(200,60,5,70,8,RED);
  tft.fillCircle(202,155,8,RED);
  
  
 
  int x = 140;

   for(int i=0;i<6;i++)
     {
       tft.fillRect(x,210,20,6,WHITE);
       x+=20;
       buzar(1,120);
       delay(100);
     }
     
     pg_2();
     
   return;  
}



void error_sd()
{
  tft.fillScreen(RED);
  tft.setTextColor(BLACK);
  tft.setTextSize(3);

  tft.fillCircle(202,105,65,WHITE);
  tft.fillRoundRect(200,60,5,70,8,RED);
  tft.fillCircle(202,155,8,RED);
  

  tft.setCursor(2,200);
  tft.print("Database Access Failed");
  
   for(int i=0;i<6;i++)
     {
       
       buzar(1,120);
     
     }
     
   return;  
}


