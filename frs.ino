#include <Adafruit_NeoPixel.h>
#define LED_PIN1 7
#define LED_PIN2 8
#define LED_PIN3 9
#define LED_PIN4 10
#define LED_PIN5 11
#define LED_PIN6 12
Adafruit_NeoPixel Pixels(144, 7, NEO_GRB + NEO_KHZ800);
Adafruit_NeoPixel Pixels1(144, 8, NEO_GRB + NEO_KHZ800);
Adafruit_NeoPixel Pixels2(144, 9, NEO_GRB + NEO_KHZ800);
Adafruit_NeoPixel Pixels3(144, 10, NEO_GRB + NEO_KHZ800);
Adafruit_NeoPixel Pixels4(144, 11, NEO_GRB + NEO_KHZ800);
Adafruit_NeoPixel Pixels5(144, 12, NEO_GRB + NEO_KHZ800);

int Num = 0;
int Num1 = 0;
int Num2 = 0;
int Num3 = 0;
int Num4 = 0;
int Num5 = 0;

#define frspin1 A0
int frsReading1;

#define frspin2 A1
int frsReading2;

#define frspin3 A2
int frsReading3;

#define frspin4 A3
int frsReading4;

#define frspin5 A4
int frsReading5;

#define frspin6 A5
int frsReading6;
void setup() {
  // put your setup code here, to run once:
    Serial.begin(9600);
    Pixels.begin();
    Pixels1.begin();
    Pixels2.begin();
    Pixels3.begin();
    Pixels4.begin();
    Pixels5.begin();
    
    Pixels.clear();
    Pixels1.clear();
    Pixels2.clear();
    Pixels3.clear();
    Pixels4.clear();
    Pixels5.clear();
 
    delay(100);
   
  }


void loop() {
frsReading1 = analogRead(frspin1);
Serial.println(frsReading1);

frsReading2 = analogRead(frspin2);
Serial.println(frsReading2);

frsReading3 = analogRead(frspin3);
Serial.println(frsReading3);

frsReading4 = analogRead(frspin4);
Serial.println(frsReading4);

frsReading5 = analogRead(frspin5);
Serial.println(frsReading5);

frsReading6 = analogRead(frspin6);
Serial.println(frsReading6);
delay(50);


Num = map(frsReading1, 220, 40, 144,0);
    Pixels.clear(); 

Num1 = map(frsReading2, 220, 40, 144,0);
    Pixels1.clear(); 

Num2 = map(frsReading3, 220, 40, 144,0);
    Pixels2.clear(); 
    
Num3 = map(frsReading4, 220, 40, 144,0);
    Pixels3.clear(); 

Num4 = map(frsReading5, 220, 40, 144,0);
    Pixels4.clear(); 

Num5 = map(frsReading6, 220, 40, 144,0);
    Pixels5.clear(); 
    
 for (int i = Num; i > 0; i--) {
    Pixels.setPixelColor(i, Pixels.Color(random(0,255), 50, 50));
     Pixels.show();
  
  }

   for (int i = Num1; i > 0; i--) {
    Pixels1.setPixelColor(i, Pixels.Color(random(0,255), 50, 50));
     Pixels1.show();
  
  }

   for (int i = Num2; i > 0; i--) {
    Pixels2.setPixelColor(i, Pixels.Color(random(0,255), 50, 50));
     Pixels2.show();
  
  }

   for (int i = Num3; i > 0; i--) {
    Pixels3.setPixelColor(i, Pixels.Color(random(0,255), 50, 50));
     Pixels3.show();
  
  }

   for (int i = Num4; i > 0; i--) {
    Pixels4.setPixelColor(i, Pixels.Color(random(0,255), 50, 50));
     Pixels4.show();
  
  }

  
   for (int i = Num5; i > 0; i--) {
    Pixels5.setPixelColor(i, Pixels.Color(random(0,255), 50, 50));
     Pixels5.show();
  
  }
}
