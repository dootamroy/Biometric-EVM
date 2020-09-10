void numpad()
{ 
  String arr[] = {" 0"," 1"," 2"," 3"," 4"," 5"," 6"," 7"," 8"," 9"," ->"," <-"};
  char n[100];
  int i,j,k=0,ind=0;
  int pos_x=10;
  tft.fillScreen(WHITE);
  tft.setTextColor(BLACK);
  tft.setCursor(8,60);                                                                         
  tft.print(nam);
  
  tft.setTextSize(0);
  tft.setCursor(8,138);                                                                         
  tft.print("ENTER YOUR AGE:");
 
  tft.setTextSize(2);
  
  tft.fillRoundRect(120,40,160,190,12,BLUE);
  
  tft.drawFastVLine(40, 40, 200, WHITE);
  tft.drawFastVLine(80, 40, 200, WHITE);
  tft.drawFastVLine(120, 40, 200, WHITE);
  tft.drawFastVLine(160, 40, 200, WHITE);
  tft.drawFastVLine(200, 40, 200, WHITE);
  tft.drawFastVLine(240, 40, 200, WHITE);
  tft.drawFastVLine(280, 40, 200, WHITE);
  tft.drawFastVLine(320, 40, 200, WHITE);
  tft.drawFastVLine(360, 40, 200, WHITE);
  
  tft.drawFastHLine(0, 40, 400, WHITE);
  tft.drawFastHLine(0, 106, 400, WHITE);
  tft.drawFastHLine(0, 172, 400, WHITE);

  

  
  tft.setTextColor(WHITE);
  k = 0;
  for(i=120;i<280;i=i+40)
  {
    for(j=60;j<=192;j=j+66)
    {
    tft.setCursor(i,j);
    tft.print(arr[k]);
    k = k+1;
    }
  }

  tft.setTextColor(BLUE);
  while(1)
  {
   TSPoint  p = ts.getPoint();
        
   pinMode(XM, OUTPUT);
   pinMode(YP, OUTPUT);
  
   if (p.z > MINPRESSURE && p.z < MAXPRESSURE) 
   {
    
    posy = map(p.x, TS_MINX, TS_MAXX, tft.height(), 0);
    posx = map(p.y, TS_MINY, TS_MAXY, tft.width(), 0);

    if(ind<3)
    {
    if(posx>120  && posx<160 )
   {
    if(posy> 40 && posy<106)
    {
      tft.setCursor(pos_x,9);
      tft.print("0");
      pos_x+=20;
      delay(100);
      n[ind] = '0';
      ind+=1;
      buzar(1,170);
    }
    }
    
    if(posx>120  && posx<160 )
   {
    if(posy> 106 && posy<172)
    {
      tft.setCursor(pos_x,9);
      tft.print("1");
      pos_x+=20;
      delay(100);
      n[ind] = '1';
      ind+=1;
      buzar(1,170);
    }
    }
    if(posx>120  && posx<160 )
   {
    if(posy> 172 && posy<238)
    {
      tft.setCursor(pos_x,9);
      tft.print("2");
      pos_x+=20;
      delay(100);
      n[ind] = '2';
      ind+=1;
      buzar(1,170);
    }
    }
    if(posx>160  && posx<200 )
   {
    if(posy>40 && posy<106)
    {
      tft.setCursor(pos_x,9);
      tft.print("3");
      pos_x+=20;
      delay(100);
      n[ind] = '3';
      ind+=1;
      buzar(1,170);
    }
    }
    if(posx>160  && posx<200 )
   {
    if(posy> 106 && posy<172)
    {
      tft.setCursor(pos_x,9);
      tft.print("4");
      pos_x+=20;
      delay(100);
      n[ind] = '4';
      ind+=1;
      buzar(1,170);
    }
    }
    if(posx>160  && posx<200 )
   {
    if(posy> 172 && posy<238)
    {
      tft.setCursor(pos_x,9);
      tft.print("5");
      pos_x+=20;
      delay(100);
      n[ind] = '5';
      ind+=1;
      buzar(1,170);
    }
    }
    if(posx>200  && posx<240 )
   {
    if(posy>40 && posy<106)
    {
      tft.setCursor(pos_x,9);
      tft.print("6");
      pos_x+=20;
      delay(100);
      n[ind] = '6';
      ind+=1;
      buzar(1,170);
    }
    }
    if(posx>200 && posx<240 )
   {
    if(posy>106 && posy<172)
    {
      tft.setCursor(pos_x,9);
      tft.print("7");
      pos_x+=20;
      delay(100);
      n[ind] = '7';
      ind+=1;
      buzar(1,170);
    }
    }
    if(posx>200  && posx<240 )
   {
    if(posy> 172 && posy<238)
    {
      tft.setCursor(pos_x,9);
      tft.print("8");
      pos_x+=20;
      delay(100);
      n[ind] = '8';
      ind+=1;
      buzar(1,170);
    }
    }
    if(posx>240  && posx<280 )
   {
    if(posy>40 && posy<106)
    {
      tft.setCursor(pos_x,9);
      tft.print("9");
      pos_x+=20;
      delay(100);
      n[ind] = '9';
      ind+=1;
      buzar(1,170);
    }
    }
    }
   if(posx>240  && posx<280 )
   {
    if(posy>106 && posy<172)
    {
      age1=0;
       for(k=0;k<ind;k++)
      age1 = 10*age1+(int)(n[k]-'0');

     if(age1<18 || age1>150)
     {
      tft.fillRoundRect(290,60,80,80,12,RED);  
       age1=0;
     }
            
     else 
     { 
      displ();
      break;
     }
      //sd_push(nam,age1,int SEX)
    }
    }
   
   if(posx>240  && posx<280 )
   {
    if(posy> 172 && posy<238)
    {
     tft.setCursor(pos_x,9);
      if(pos_x>10)
      pos_x-=20;
      
      tft.fillRect(pos_x,9,25,20,WHITE);
      delay(100);
      n[ind] = ' ';
      if(ind>0)
      ind-=1;
      buzar(1,170);
    }
    }

  }
}
//return;
}
