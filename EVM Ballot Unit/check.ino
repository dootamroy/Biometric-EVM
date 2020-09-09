int check()
{
   fps.SetLED(true); //turn on fps led.

 
while(1)
{
    
    if (fps.IsPressFinger())
  {
    fps.CaptureFinger(false);
    id = fps.Identify1_N();
    
      
    if (id <200)
    {
      fps.SetLED(false);   //turn off fps led.
      
    /*
      if(id==0 || id==1)
      {
        id=0;
      }
      if(id==2 || id==3)
      {
        id=1;
      }
      if(id==4 || id==5)
      {
        id=2;
      }
      if(id==6 || id==7)
      {
        id=3;
      }
      if(id==8 || id==9)
      {
        id=4;
      }

      if(id==10 || id==11)
      {
        id=5;
      }
      if(id==12 || id==13)
      {
        id=6;
      }    
      */
    
  break;
    
   }
   else
     tft.print("no"); //if unable to recognize

     
  }
}
return id;
}
