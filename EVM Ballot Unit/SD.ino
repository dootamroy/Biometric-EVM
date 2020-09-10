
void sd_push(String Name,int Age,String SEX)  //write
{
  myFile = SD.open("database.csv", FILE_WRITE);

    String data = Name + "," + String(Age) + "," +  String(SEX);
    myFile.println(data);
  
  
  myFile.close();
}



void sd_pop(int line_num)    //read    (name,age,sex)
{
  int ch ; int i=0,counter=0;
  int arr[100];
  //int line_num =0; //id.
  
  if (SD.exists("database.csv"))
  {
    
    myFile = SD.open("database.csv");

 while (myFile.available())
 {
  
    ch= myFile.read();
    
    if(ch == 13)
     {
       counter++;
       
       if(line_num == counter-1)
       {
       // ch= myFile.read();     // to remove the ascii 10.
        
        while(myFile.available())
        {
          arr[i]= myFile.read();
          if(arr[i]==13)
          {
            i--;
            break;
          }
           i++;
        }
        break;
       }
     }
    
    
 }  
 
   myFile.close();


  /* for(int k=1;k<=i;k++)
   {
      Serial.println(arr[k]);
   }
*/
}

  else
  {
    error_sd();
  }

  //.................................................................................................

    int name_[100],age[100],sex[100],abb[100];
    int flag=1,l=0,n=0,p=0,o=0;
for(int k=1;k<=i;k++)
   {
     if(flag==1)
     {
      name_[l]=arr[k];
      l++;
     }
     else if(flag==2)
     {
      age[o]=arr[k];
      o++;
     }
     else if(flag==3)
     {
      sex[p]=arr[k];
      p++;
     }
      //Serial.println(arr[k]);
      if(arr[k] == 44)
      {
        flag++;
      }
   }
  /* Serial.print("  ");
   Serial.print(l);
   Serial.print("  ");
   Serial.print(o);
   Serial.print("  ");
   Serial.print(p);
   */
char naam[100],sal[100],six[100]; 
for(int f=0;f<l-1;f++)
{
   //Serial.print("  ");
  // Serial.print(name_[f]);
   naam[f]=name_[f];
   //String naam=naam+(a);
   //Serial.println(naam[f]);
}
//Serial.println(" ");
for(int f=0;f<o-1;f++)
{
   //Serial.print("  ");
   //Serial.print(age[f]);
   sal[f]=age[f];
}
//Serial.println(" ");
for(int f=0;f<p;f++)
{
   //Serial.print("  ");
   //Serial.print(sex[f]);
   six[f]=sex[f];
}

// tft.setCursor(130,80);
  //tft.print(Name[id]);

//  tft.setCursor(130,120);
 // tft.print(age[id]);

 // tft.setCursor(155,160);
 // tft.print(gender[id]);

 
//Serial.println(" ");

tft.setCursor(130,80);
for(int f=0;f<l-1;f++)
{
Serial.print(naam[f]);
 tft.print(naam[f]);
}
Serial.println(" ");

tft.setCursor(130,120);
for(int f=0;f<o-1;f++)
{
//Serial.print(sal[f]);
 tft.print(sal[f]);
}

//Serial.println(" ");

tft.setCursor(155,160);
for(int f=0;f<p;f++)
{
Serial.print(six[f]);
  tft.print(six[f]);
}


  //count_flag=0;
 // m_flag=0;
 // f_flag=0;
/*  
if(six[0]=='M')
{
  m_flag=1;
}
else if(six[0]=='F')
{
  f_flag=1;
}
*/
  //................................................................................................
}



void clear_file()
{
   SD.remove("database.csv");    //deleting the existing file.

  myFile = SD.open("database.csv", FILE_WRITE);     //again creating the file.

       String header = "Name, Age, Gender"; 
       myFile.println(header);


   
       String data = "Dootam Roy,20,Male";
              myFile.println(data);
              data = "Shubhranil Chk,20,Male";
              myFile.println(data);
              data = "Arif Mmd.,20,Male";
              myFile.println(data);
              data = "Rodsi Sarkar,20,Female";
              myFile.println(data);
              

              data = " ";
              myFile.println(data);


  
  myFile.close();
  
}

