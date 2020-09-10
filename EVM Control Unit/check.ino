int check()
{
  int idl;
  Serial3.write(9);
  delay(100);  
  Serial3.flush();

 for(;;)
 {
  if(Serial3.available()>0)
  idl = Serial3.read();
  
  //Serial3.flush(); 
  
  if(idl==3 || idl==4)
  {
   tft.print(idl);
   delay(1000);
   return 1;
  }
  else if(idl>=0)
  {
    tft.print(idl);
    delay(1000);
   return 0;
  }

   
 }
  
}

