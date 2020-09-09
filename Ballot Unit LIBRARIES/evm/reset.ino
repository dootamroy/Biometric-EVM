void rst()
{
    tft.fillScreen(WHITE);
    tft.setTextColor(WHITE);   
    tft.setTextSize(4);
    tft.fillCircle(160,120,50,RED);
    tft.setCursor(132,120);
    tft.setTextSize(2);
    tft.print("RESET");
    delay(2000);
    scrn();
    loop();
}

