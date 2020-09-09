void scrn()
{
    tft.fillScreen(BLACK);
    tft.setTextColor(WHITE);   
    tft.setTextSize(2);
    tft.drawRoundRect(20,80,280,100,20,GREEN);
    tft.setCursor(90,120);
    tft.print("MOCK ELECTION");
}

