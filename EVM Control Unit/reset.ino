void rst()
{
    tft.fillScreen(WHITE);
    tft.setTextColor(WHITE);   
    tft.setTextSize(4);
    tft.fillCircle(160,120,60,BLUE);
    tft.setCursor(110,120);
    tft.setTextSize(2);
    tft.print("RESETTING");

        buzz();
//.................................................

  count_cat=0;
  sw_count=6;
  

 for(int j=0;j<3;j++)
 {
  count_sub_cat[j]=0;
 }



//.................................................  
  
int x = 100;

for(int i=0;i<6;i++)
{
 if(i==0)
 {
  delay(100);
  Serial3.write(1 / 256);
    delay(100);  
  Serial3.write(1 % 256);
  Serial3.flush();  
 }
tft.fillRect(x,210,20,6,BLUE);
x+=20;
delay(500);
}

for(int i=0;i<7;i++)
  EEPROM.write(i,0);

    scrn();
    
    loop();
}

