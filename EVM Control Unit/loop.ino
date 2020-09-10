void loop()
{
 int flag = 0;
 
 if(Serial3.available()>0)
 {
   id = Serial3.read();
   id = (int)(id) - 48;
   vcount[id]++;
   EEPROM.write(id,vcount[id]);
   delay(100);
 }
   
  btn_ctrl();
  
  
  if(btn_state[1]==HIGH)
  {
     flag = check();
     if(flag==1)
     {
     rst();
     flag = 0;
     }
     else
     uas();
  }
     
  if(btn_state[0]==HIGH)
  {
    flag = check();
     if(flag==1)
     {
     buzz();
     set();
     flag = 0;
     }
     else
     uas(); 
  }

  if(btn_state[2]==HIGH)
  {
    flag = check();
     if(flag==1)
     {
     displayres();
     flag = 0;
     }
     else
     uas();
  }
    
}

