void set()
{
  int x;
  tft.fillScreen(WHITE);
  tft.setTextSize(2);
  tft.setTextColor(BLACK);
  tft.setCursor(5,20);
  tft.print("ENTER NUMBER OF CATEGORIES");
  tft.setCursor(140,50);
  tft.setTextColor(RED);
  tft.print("(MAX 3)");

  
  tft.fillRect(140,200,30,30,BLUE);
  tft.setCursor(150,210);

  tft.setTextColor(WHITE);
  tft.print(count_cat);

  
  for(;;)
  { 
    btn_ctrl();

    if(btn_state[3]==HIGH)    //up
    {
      buzz();
      x = count_cat;
      count_cat++;

      if(count_cat>3)
      {
        count_cat=3;
      }
      delay(200);
    }

    if(btn_state[4]==HIGH)   // down
    {
      buzz();
      x = count_cat;
      count_cat--;

      if(count_cat<0)
      {
        count_cat=0;
      }
      delay(200);
    }

    if(btn_state[2]==HIGH)   //Enter.
      {
        buzz();
      if(count_cat==0)   //Error.
      {
          error();
      }
      
      else
      {
      set_2();
      }
      
      break;
      }

    if(x!=count_cat)
    {
     x = count_cat; 
     tft.fillRect(140,200,30,30,BLUE);
     tft.setCursor(150,210);
     
     tft.print(count_cat,BLUE);    
    }
  }


  btn_state[2]=LOW;
  scrn();
 // loop();
}

