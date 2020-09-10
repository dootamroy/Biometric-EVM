void uas()
{
  tft.fillScreen(BLACK);
  tft.setCursor(10,60);
  tft.setTextColor(WHITE);
  tft.print("UNAUTHORISED ACCESS");
  delay(5000);
  scrn();
  loop();
}

