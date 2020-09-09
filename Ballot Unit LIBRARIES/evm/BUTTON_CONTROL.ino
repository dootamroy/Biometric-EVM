void btn_ctrl()
{
  for(int i = 0;i<5;i++)
  {
    btn_state[i] = digitalRead(c_btn[i]);
    //Serial.print(btn_state[i]);
    //Serial.print("\n");
  }
  
}

