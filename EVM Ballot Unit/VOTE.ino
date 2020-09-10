void vote()
{
  tft.fillScreen(WHITE);
  tft.setTextSize(2);
  tft.setTextColor(BLACK);
  
  tft.setCursor(80,120);
  tft.print("PLEASE CAST YOUR VOTE");

  
  read_button();      //button status read.
  count_flag=1;
  

  tft.fillScreen(WHITE);
  tft.setTextSize(2);
  tft.setTextColor(BLUE);
  
  tft.setCursor(80,120);
  tft.print("YOU VOTED FOR: ");
  
  if(vote_<6)
  {
  tft.print(party[vote_]);
  }

  else
  {
    tft.print("NOTA");
  }

// Serial.println();
  digitalWrite(led[vote_],HIGH);
  delay(1000);
  digitalWrite(led[vote_],LOW);
  /*
   for(int i=0;i<7;i++)
  {
    Serial.println(vcount[i]);
    delay(100);
  }
*/

//................................................................ vote count m/f
/*
int mod_vote= vote_;     //copy the vote id into another integer.
int mod_flag;
if(m_flag==1 && count_flag==1)
{
   mod_flag=0;
}
else if(f_flag==1 && count_flag==1)
{
  mod_flag=1;
}

mod_vote=mod_vote*10 + mod_flag;
*/
//................................................................
                     
                      Serial3.print(vote_);    //for sending directly the vote id.
                      //Serial3.print(mod_vote);   //vote id + M/F voter flag.
                      delay(100);
                      
                      Serial3.flush();
                      
                      
                //      Serial.println(vote_);
                      

 vcount[id+6] = 2;

delay(4000);
  
}

