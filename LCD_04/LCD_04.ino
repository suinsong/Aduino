#include <LiquidCrystal.h>
#include "WeMosPIN.h"

LiquidCrystal myLCD(D2,D3,D4,D5,D6,D7);


void setup() {
 //LCD초기화
 myLCD.begin(16,2); //16*2짜리 LCD

myLCD.clear();//LCD초기화


}

void loop() {

int cds = analogRead(A0);
myLCD.setCursor(0,0); //첫번째 칸 첫번째 줄부터시작
myLCD.print("Light: ");
myLCD.print(cds);
delay(1000);
myLCD.clear();

}
