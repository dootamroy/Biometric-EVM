#include <Adafruit_GFX.h>  
#include <MCUFRIEND_kbv.h>
#include<TouchScreen.h>
#include "FPS_GT511C3.h"
#include "SoftwareSerial.h"
#include <EEPROM.h>
#include <SPI.h>
#include <SD.h>

File myFile;



MCUFRIEND_kbv tft;
#define  BLACK   0x0000
#define BLUE    0x001F
#define RED     0xF800
#define GREEN   0x07E0
#define CYAN    0x07FF
#define MAGENTA 0xF81F
#define YELLOW  0xFFE0
#define WHITE   0xFFFF
#define ORANGE  0xFBE0
uint8_t YP=A1;
uint8_t XM=A2;
uint8_t YM=7;
uint8_t XP=6;
#define TS_MINX 940
#define TS_MINY 160
#define TS_MAXX 160
#define TS_MAXY 970
TouchScreen ts = TouchScreen(XP,YP,XM,YM,300);

#define MINPRESSURE 10
#define MAXPRESSURE 1000
FPS_GT511C3 fps(A8,A9);

int enrollid;
String nam;
int age1=0;
int posx,posy;

int k=0;

String Name;
String gender;
int age;

int btn[7] = {48,46,42,47,40,44,49};    //52->NOTA.
int led[7] = {37,35,33,31,29,27,25};    //25->NOTA.
int btn_state[7];


int vote_;
int vcount[100]={0};
int vcount1[100]={0};
int var,addr;
int buzz=23;
int id;

byte b1;
byte b2;
int val;
int cat;
int subcat[3];
int flag_rec=0;
String party[7] = {"SP","BSP","RJD","RS","JP","JSP","NOTA"};

//ration of male-female voters.
//int m_count=0;
//int f_count=0;
int count_flag;
int m_flag,f_flag;

