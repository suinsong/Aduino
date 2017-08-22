#include <LiquidCrystal.h>
#include "WeMosPIN.h"
#define PIR D8
LiquidCrystal myLCD(D2,D3,D4,D5,D6,D7);


void setup() {
 //LCD초기화
 myLCD.begin(16,2); //16*2짜리 LCD

myLCD.clear();//LCD초기화
pinMode(PIR,INPUT);

}

void loop() {

int pSen = digitalRead(PIR);
myLCD.setCursor(0,0); //첫번째 칸 첫번째 줄부터시작
if(pSen == HIGH){
  myLCD.print("Warning!!");
}else{
   myLCD.print("safe        ");
}
delay(1000);


}
