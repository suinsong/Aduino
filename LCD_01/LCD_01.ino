#include <LiquidCrystal.h>
#include "WeMosPIN.h"

LiquidCrystal myLCD(D2,D3,D4,D5,D6,D7);
void setup() {
 //LCD초기화
 myLCD.begin(16,2); //16*2짜리 LCD

myLCD.clear();//LCD초기화


}

void loop() {
  // put your main code here, to run repeatedly:
myLCD.setCursor(0,0); //첫번째 칸 첫번째 줄부터시작
myLCD.print("Hello");

myLCD.setCursor(0,1);// 첫번째칸, 두번째줄
myLCD.autoscroll();

for(int i =0; i<10;i++){
  myLCD.print(millis()/1000);
  myLCD.print(" ");
  delay(1000);

}
myLCD.noAutoscroll();


}
