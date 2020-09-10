void displayres()  
{
  int vt,y=20;
  tft.fillScreen(WHITE);
  
  tft.setTextColor(BLACK);

  for(int j=0;j<7;j++)
  {
   tft.setCursor(20,y);
   vt = EEPROM.read(j);
   tft.print(pn[j]+": "+vt);
   y+=30;
  }
  delay(5000);
  scrn();
}

