void read_button()
{
  int flag=0;
  int flag2=0;
  int j=0;
  while(1)
  {
     for(int i=0;i<7;i++)
     {
       // btn_state[i]=digitalRead(btn[i]);

        switch(cat)
        {
          case 1:   btn_state[i]=digitalRead(btn[i]);
                    if(btn_state[i]==HIGH && i<subcat[0] || btn_state[6]==HIGH)
                    {
                      btn_state[6] = LOW;
                      vote_=i;
                      vcount[i]++;
                      vcount1[i] = vcount[i];
                      flag=1;
                      buzar(1,200);
                      
       
                      
                      break;
                    }
                   else if(btn_state[i]==HIGH)
                   {
                    tft.fillScreen(WHITE);
                    tft.setCursor(10,120);
                    tft.setTextColor(BLACK);
                    tft.print("Kindly press active switches.");
                    buzar(3,200);
                    delay(2000);
                    btn_state[i]=LOW;
                    tft.fillScreen(WHITE);
                    tft.setTextSize(2);
                    tft.setTextColor(BLACK);
  
                    tft.setCursor(80,120);
                    tft.print("PLEASE CAST YOUR VOTE");
                    continue;
                   }
                   break;

      /*    case 3: int lbn=0,ubn=1;

                  while(j<cat)
                  {
                  btn_state[i]=digitalRead(btn[i]);  
                  if(btn_state[i]==HIGH && i>=lbn && i<ubn)
                  {
                    vote_=i;
                    vcount[i]++;
                    vcount1[i] = vcount[i];
                    flag=1;
                    buzar(1,200);
                      
                      
                    j++;
                       lbn=lbn+2;
                  ubn=ubn+2;
                  Serial.print(ubn);
                  Serial.print(lbn);
                    break;
                  }
                  else if(btn_state[i]==HIGH)
                  {
                    tft.fillScreen(WHITE);
                    tft.setCursor(10,120);
                    tft.setTextColor(BLACK);
                    tft.print("Kindly press active switches.");
                    buzar(3,200);
                    delay(2000);
                    btn_state[i]=LOW;
                    tft.fillScreen(WHITE);
                    tft.setTextSize(2);
                    tft.setTextColor(BLACK);
                    continue;
                  }
               
                  }

                  break;

           case 2: lbn=0,ubn=subcat[0];

                  while(j<cat)
                  {
                  if(btn_state[i]==HIGH && i>=lbn && i<ubn)
                  {
                    vote_=i;
                    vcount[i]++;
                    vcount1[i] = vcount[i];
                    flag=1;
                    buzar(1,200);

                      
                      
                    j++;
                    break;
                  }
                  else if(btn_state[i]==HIGH)
                  {
                    tft.fillScreen(WHITE);
                    tft.setCursor(10,120);
                    tft.setTextColor(BLACK);
                    tft.print("Kindly press active switches.");
                    buzar(3,200);
                    delay(2000);
                    ready_();
                  }
                  lbn=ubn;
                  ubn=ubn+subcat[1];
                  }

                  break;    */   
        }
     }

     if(flag==1)
     {
       break;
     }
     
  }
  
}

