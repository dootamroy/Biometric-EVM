void setup() 
{
  
  pinMode(buzz,OUTPUT); 
  pinMode(53,OUTPUT);     //cs pin.
  /*for (int i = 0 ; i < EEPROM.length() ; i++) 
   {
    EEPROM.write(i, 0);
   }*/

   
  for(int i=0;i<7;i++)
  {
    pinMode(btn[i], INPUT);
    pinMode(led[i], INPUT);
  }
  
  
  Serial.begin(9600);
  Serial3.begin(9600);
  Serial3.flush();

  
  tft.reset();
  tft.begin(0x65);
  tft.setRotation(3);
  fps.Open();         //send serial command to initialize fps

  //extract();


   for(int i=0;i<16;i++)   //read eeprom.
  {
    vcount[i] = EEPROM.read(i);
  }

  delay(100);

  if (!SD.begin(53)) {
   // Serial.println("SD initialization failed!");
    error_sd();
    while (1);
  }

  
//  sd_pop(5);


  front();  
}

