void pg_2()
{
  tft.fillScreen(WHITE);

  tft.fillRect(90,100,320,150,GREEN);
  tft.fillRect(0,0,90,100,GREEN);
  
  tft.setCursor(100,120);
  tft.setTextColor(BLACK);
  tft.setTextSize(2);
  tft.print("PLEASE PRESS YOUR FINGER");
  //delay(10000);
}

