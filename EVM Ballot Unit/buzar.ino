void buzar(int x,int deelay)
{
  for(int i=1;i<=x;i++)
  {
    digitalWrite(buzz,HIGH);
    delay(deelay-100);
    digitalWrite(buzz,LOW);
    delay(deelay-100);
  }
}

