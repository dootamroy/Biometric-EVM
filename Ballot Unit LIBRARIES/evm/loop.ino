void loop()
{
  //scrn();
  
  for(int i = 0;i<5;i++)
  {
    btn_state[i] = digitalRead(c_btn[i]);
    Serial.print(btn_state[i]);
    Serial.print("\n");
  }
  if(btn_state[1]==HIGH)
     rst();
     
  if(btn_state[0]==HIGH)
     set();   
}

