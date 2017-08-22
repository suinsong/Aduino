

#include "WeMosPin.h"

#define PIR 5
#define LED 4

void setup() {
  // put your setup code here, to run once:

    pinMode(PIR, INPUT);
    pinMode(LED, OUTPUT);
    Serial.begin(115200);
    
}

void loop() {
  
//  digitalWrite(LED,HIGH);
//  delay(500);
//  
//  digitalWrite(LED,LOW);
//  delay(500);

  

//  put your main code here, to run repeatedly:
  int check =digitalRead(PIR);
  if(check == HIGH){
    digitalWrite(LED, HIGH);
    
  }else{
    digitalWrite(LED,LOW);
  }

}
