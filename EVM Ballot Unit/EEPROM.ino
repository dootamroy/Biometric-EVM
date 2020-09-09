/*

void save()
{
  
  for(int i=0;i<7;i++)
  {
    for(int j=0;j<4;j++)
    {
      addr = i*4+j;
      var = vcount1[i]%10;
      EEPROM.write(addr,var);
      vcount1[i] = vcount1[i]/10;
      Serial.println("Var : ");
      Serial.println(var);
      
    }
  }
  
}

void extract()
{
  for(int i=0;i<7;i++)
  {
    for(int j=3;j>=0;j--)
    {
      addr = i*4+j;
      var = EEPROM.read(addr);
      vcount[i] = vcount[i]*10+var;
      
    }
  }
  
}

*/

void clear_eeprom()
{
  tft.fillScreen(BLUE);
  
  for(int i=0;i<40;i++)
  {
    EEPROM.update(i,0);
    delay(100);
  }

  EEPROM.update(99,4);
  clear_file();
  //front(); 
}

