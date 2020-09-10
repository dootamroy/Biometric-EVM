void senddata()
{
  val = 0;
  for(int i=0;i<count_cat;i++)
    val = val*10+count_sub_cat[i];

   val=val*10+count_cat;
     //int value=12345; //this would be much more exciting if it was a sensor value

    delay(100);
  Serial3.write(val / 256);
    delay(100);  
  Serial3.write(val % 256);
 //  delay(50); //allows all serial sent to be received together
  Serial3.flush(); 
  Serial.print(val);
}

