void scrn()
{
    tft.fillScreen(WHITE);
    tft.setTextColor(WHITE);   
    tft.setTextSize(3);
    tft.fillRoundRect(20,80,280,100,20,BLUE); 
    tft.setCursor(50,120);
    tft.print("MOCK ELECTION");

        tft.setTextColor(BLACK); 

    if(count_cat>0)
    {
      buzz();
      
      tft.setTextSize(2);
      tft.setCursor(50,200);
      tft.print("Categories : ");
      tft.print(count_cat);

      tft.setCursor(40,220);
      tft.print("Number of seats : ");
      for(int i=0;i<count_cat;i++)
      {
        tft.print(count_sub_cat[i]);
        tft.print(" ");
      }
    }
}

