
void setup()
{
     Serial.begin(9600);
     Serial3.begin(9600);
     //Serial3.flush(); 
     pinMode(buzzer,OUTPUT);
     
     uint16_t ID = tft.readID();
       if (ID == 0xD3D3) ID = 0x9481; // write-only shield

    tft.begin(ID);
    tft.setRotation(1);
    scrn();
    for(int i = 0;i<5;i++)
     pinMode(c_btn[i],INPUT);
}


