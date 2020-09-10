void error()
{
  tft.fillScreen(RED);
  tft.setTextColor(BLACK);

  tft.fillCircle(162,105,65,WHITE);
  tft.fillRoundRect(160,60,5,70,8,RED);
  tft.fillCircle(162,155,8,RED);
  
  
 
  int x = 100;

   for(int i=0;i<6;i++)
     {
       tft.fillRect(x,210,20,6,WHITE);
       x+=20;
       buzz();
       delay(100);
     }
}

