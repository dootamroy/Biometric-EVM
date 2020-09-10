void set_2()
{
if(count_cat==3)
{
  count_sub_cat[0] = count_sub_cat[1] = count_sub_cat[2]= 2;
  senddata();
  return 0;   
}
int v=0;  
  tft.fillScreen(WHITE);
  tft.setTextSize(2);
  tft.setTextColor(BLACK);
  tft.setCursor(20,20);
  tft.print("ENTER NUMBER OF SUB-CAT: ");

  tft.setCursor(90,70);
  tft.setTextColor(BLUE);
  tft.setTextSize(2);
  tft.print("CATEGORIES: ");
  tft.print(count_cat);


for(int i=0;i < count_cat;i++)
{
  tft.fillRect(30,100,200,200,WHITE);
  tft.setCursor(40,110);
  tft.setTextColor(BLACK);
  tft.setTextSize(2);
  tft.print("CAT: ");
  tft.print(i+1);


//...................................................................

          tft.fillRect(140,200,30,30,BLUE);
          
          tft.setCursor(150,210);
          tft.setTextColor(WHITE);
          

  
  for(;;)
  { 
    int x;
    btn_ctrl();

     if(btn_state[3]==HIGH)    //up
        {
          buzz();
         x = count_sub_cat[i]; 
         count_sub_cat[i]++;    
         delay(200);   
        }

        if(btn_state[4]==HIGH)   // down
        {
          buzz();
         x = count_sub_cat[i];
         count_sub_cat[i]--; 
         delay(200);
        }

        if(btn_state[2]==HIGH)   //Enter.
        {
          buzz();
         delay(200); 
         break;      
        }
              
        switch(count_cat)
        {
          case 1: if(count_sub_cat[i]<2)
                    count_sub_cat[i] = 2;
                  if(count_sub_cat[i]>6)
                    count_sub_cat[i] = 6;
                  break;
             
           case 2: if(i==0)
                   { 
                    if(count_sub_cat[i]<2)
                    count_sub_cat[i] = 2;
                    if(count_sub_cat[i]>4)
                    count_sub_cat[i] = 4;
                   }
                   else if(i==1)
                   {
                    v = 6-count_sub_cat[0];
                    if(count_sub_cat[i]<2)
                    count_sub_cat[i] = 2;
                    if(count_sub_cat[i]>v)
                    count_sub_cat[i] = v;
                   }
                  break;          
        }
    



   if(x != count_sub_cat[i])
   {
     x = count_sub_cat[i];
     tft.fillRect(140,200,30,30,BLUE);
     tft.setCursor(150,210);
     tft.print(count_sub_cat[i]);    
   } 
     
  }
  
}


          
  
senddata();  
}

