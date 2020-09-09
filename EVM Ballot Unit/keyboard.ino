void keyboard()
{
  String arr[] = {"A","B","C","D","E","F","G","H","I","J","K","L","M","N","O","P","Q","R","S","T","U","V","W","X","Y","Z","__","->","<-"," "};

  char n[100];
  int i,j,k=0,ind=0;
  int pos_x=10;
  tft.setTextSize(2);
  tft.fillScreen(WHITE);
  tft.fillRect(0,40,400,200,BLACK);
  
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

  k = 0;
  tft.setTextColor(WHITE);
  for(i=10;i<=370;i=i+40)
  {
    for(j=60;j<=192;j=j+66)
    {
    tft.setCursor(i,j);
    tft.print(arr[k]);
    k = k+1;
    }
  }

  ind = 0;
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


   if(posx>0  && posx<40 )
   {
    if(posy> 40 && posy<106)
    {
      tft.setCursor(pos_x,9);
      tft.print("A");
      pos_x+=20;
      delay(100);
      n[ind] = 'A';
      ind+=1;
      buzar(1,200); 
     }
    }
   
    if(posx>0  && posx<40 )
   {
    if(posy> 106 && posy<172)
    {
      tft.setCursor(pos_x,9);
      tft.print("B");
      pos_x+=20;
      delay(100);
      n[ind] = 'B';
      ind+=1;
      buzar(1,200);
    }
    }
    if(posx>0  && posx<40 )
   {
    if(posy> 172 && posy<238)
    {
      tft.setCursor(pos_x,9);
      tft.print("C");
      pos_x+=20;
      delay(100);
      n[ind] = 'C';
      ind+=1;
      buzar(1,200);
    }
    }
   if(posx>40 && posx<80 )
   {
    if(posy> 40 && posy<106)
    {
      tft.setCursor(pos_x,9);
      tft.print("D");
      pos_x+=20;
      delay(100);
      n[ind] = 'D';
      ind+=1;
      buzar(1,200);
    }
    }
    if(posx>40  && posx<80 )
   {
    if(posy> 106 && posy<172)
    {
      tft.setCursor(pos_x,9);
      tft.print("E");
      pos_x+=20;
      delay(100);
      n[ind] = 'E';
      ind+=1;
      buzar(1,200);
    }
    }
    if(posx>40  && posx<80 )
   {
    if(posy> 172 && posy<238)
    {
      tft.setCursor(pos_x,9);
      tft.print("F");
      pos_x+=20;
      delay(100);
      n[ind] = 'F';
      ind+=1;
      buzar(1,200);
    }
    }
    if(posx>80  && posx<120 )
   {
    if(posy> 40 && posy<106)
    {
      tft.setCursor(pos_x,9);
      tft.print("G");
      pos_x+=20;
      delay(100);
      n[ind] = 'G';
      ind+=1;
      buzar(1,200);
    }
    }
    if(posx>80  && posx<120 )
   {
    if(posy> 106 && posy<172)
    {
      tft.setCursor(pos_x,9);
      tft.print("H");
      pos_x+=20;
      delay(100);
      n[ind] = 'H';
      ind+=1;
      buzar(1,200);
    }
    }
    if(posx>80 && posx<120 )
   {
    if(posy> 172 && posy<238)
    {
      tft.setCursor(pos_x,9);
      tft.print("I");
      pos_x+=20;
      delay(100);
      n[ind] = 'I';
      ind+=1;
      buzar(1,200);
    }
    }
    if(posx>120  && posx<160 )
   {
    if(posy> 40 && posy<106)
    {
      tft.setCursor(pos_x,9);
      tft.print("J");
      pos_x+=20;
      delay(100);
      n[ind] = 'J';
      ind+=1;
      buzar(1,200);
    }
    }
    if(posx>120  && posx<160 )
   {
    if(posy> 106 && posy<172)
    {
      tft.setCursor(pos_x,9);
      tft.print("K");
      pos_x+=20;
      delay(100);
      n[ind] = 'K';
      ind+=1;
      buzar(1,200);
    }
    }
    if(posx>120  && posx<160 )
   {
    if(posy> 172 && posy<238)
    {
      tft.setCursor(pos_x,9);
      tft.print("L");
      pos_x+=20;
      delay(100);
      n[ind] = 'L';
      ind+=1;
      buzar(1,200);
    }
    }
    if(posx>160  && posx<200 )
   {
    if(posy>40 && posy<106)
    {
      tft.setCursor(pos_x,9);
      tft.print("M");
      pos_x+=20;
      delay(100);
      n[ind] = 'M';
      ind+=1;
      buzar(1,200);
    }
    }
    if(posx>160  && posx<200 )
   {
    if(posy> 106 && posy<172)
    {
      tft.setCursor(pos_x,9);
      tft.print("N");
      pos_x+=20;
      delay(100);
      n[ind] = 'N';
      ind+=1;
      buzar(1,200);
    }
    }
    if(posx>160  && posx<200 )
   {
    if(posy> 172 && posy<238)
    {
      tft.setCursor(pos_x,9);
      tft.print("O");
      pos_x+=20;
      delay(100);
      n[ind] = 'O';
      ind+=1;
      buzar(1,200);
    }
    }
    if(posx>200  && posx<240 )
   {
    if(posy>40 && posy<106)
    {
      tft.setCursor(pos_x,9);
      tft.print("P");
      pos_x+=20;
      delay(100);
      n[ind] = 'P';
      ind+=1;
      buzar(1,200);
    }
    }
    if(posx>200 && posx<240 )
   {
    if(posy>106 && posy<172)
    {
      tft.setCursor(pos_x,9);
      tft.print("Q");
      pos_x+=20;
      delay(100);
      n[ind] = 'Q';
      ind+=1;
      buzar(1,200);
    }
    }
    if(posx>200  && posx<240 )
   {
    if(posy> 172 && posy<238)
    {
      tft.setCursor(pos_x,9);
      tft.print("R");
      pos_x+=20;
      delay(100);
      n[ind] = 'R';
      ind+=1;
      buzar(1,200);
    }
    }
    if(posx>240  && posx<280 )
   {
    if(posy> 40 && posy<106)
    {
      tft.setCursor(pos_x,9);
      tft.print("S");
      pos_x+=20;
      delay(100);
      n[ind] = 'S';
      ind+=1;
      buzar(1,200);
    }
    }
    if(posx>240  && posx<280 )
   {
    if(posy>106 && posy<172)
    {
      tft.setCursor(pos_x,9);
      tft.print("T");
      pos_x+=20;
      delay(100);
      n[ind] = 'T';
      ind+=1;
      buzar(1,200);
    }
    }
    if(posx>240  && posx<280 )
   {
    if(posy> 172 && posy<238)
    {
      tft.setCursor(pos_x,9);
      tft.print("U");
      pos_x+=20;
      delay(100);
      n[ind] = 'U';
      ind+=1;
      buzar(1,200);
    }
    }
    if(posx>280  && posx<320 )
   {
    if(posy>40 && posy<106)
    {
      tft.setCursor(pos_x,9);
      tft.print("V");
      pos_x+=20;
      delay(100);
      n[ind] = 'V';
      ind+=1;
      buzar(1,200);
    }
    }
    if(posx>280  && posx<320 )
   {
    if(posy>106 && posy<172)
    {
      tft.setCursor(pos_x,9);
      tft.print("W");
      pos_x+=20;
      delay(100);
      n[ind] = 'W';
      ind+=1;
      buzar(1,200);
    }
    }
    if(posx>280  && posx<320 )
   {
    if(posy>172 && posy<238)
    {
      tft.setCursor(pos_x,9);
      tft.print("X");
      pos_x+=20;
      delay(100);
      n[ind] = 'X';
      ind+=1;
      buzar(1,200);
    }
    }
    if(posx>320  && posx<360 )
   {
    if(posy>40 && posy<106)
    {
      tft.setCursor(pos_x,9);
      tft.print("Y");
      pos_x+=20;
      delay(100);
      n[ind] = 'Y';
      ind+=1;
      buzar(1,200);
    }
    }
    if(posx>320  && posx<360 )
   {
    if(posy>106 && posy<172)
    {
      tft.setCursor(pos_x,9);
      tft.print("Z");
      pos_x+=20;
      delay(100);
      n[ind] = 'Z';
      ind+=1;
      buzar(1,200);
    }
    }
    if(posx>320  && posx<360 )
   {
    if(posy> 172 && posy<238)
    {
      tft.setCursor(pos_x,9);
      //tft.print("    ");
      pos_x+=20;
      delay(100);
      n[ind] = ' ';
      ind+=1;
      buzar(1,200);
    }
    }
    
     if(posx>360  && posx<400)
   {
    if(posy>40&& posy<106)
    {

     for(k=0;k<ind;k++)
      nam = nam + n[k];
      
     numpad();
     break;
    }
    }
    if(posx>360  && posx<400 )
   {
    if(posy>106 && posy<172)
    {
      tft.setCursor(pos_x,9);
      if(pos_x>10)
      pos_x-=20;
      
      tft.fillRect(pos_x,9,25,20,WHITE);
      delay(100);
      n[ind] = ' ';
      if(ind>0)
      ind-=1;
    }
    }
    
   
   
   }
   
 }
return;
}

