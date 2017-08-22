#include "WeMosPin.h"

#define TRIGER D2
#define ECHO D3

void setup() {
  pinMode(TRIGER, OUTPUT);
  pinMode(ECHO, INPUT);

  Serial.begin(9600);
 
}

void loop(){
  
float duration =0;
float distance =0;

//트리거 핀에 하이 신호를 보내고
digitalWrite(TRIGER,HIGH);
delay(10);//약 10ms 동안 유지
digitalWrite(TRIGER,LOW);

// 트리거 핀이 LOW된 후, 에코핀에 신호가 입력될때까지의 시간
duration = pulseIn(ECHO,HIGH);
distance = (float)((duration*340)/10000)/2;
Serial.print(distance);
Serial.println("cm");


  
}



