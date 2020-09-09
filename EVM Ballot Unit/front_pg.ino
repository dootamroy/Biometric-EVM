void front()
{
  tft.fillScreen(WHITE);
  tft.setTextSize(4);
  //tft.setCursor(200,100);
  tft.setTextColor(BLUE);
  tft.fillRect(0,0,400,80,ORANGE);
  tft.fillRect(0,160,400,80,GREEN);
  tft.setCursor(130,105);
  tft.print("WELCOME");


  tft.setTextSize(1);
  tft.setCursor(130,210);
  tft.setTextColor(BLACK);
  tft.print("TOUCH THE SCREEN TO CONTINUE");

 // tft.fillRect(0,0,100,100,RED);
}

