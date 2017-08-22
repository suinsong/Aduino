#include "WeMosPin.h"

// 서보 모터를 사용하기 위한 라이브러리 
#include <Servo.h>

// 서보 시그널 핀이 연결된 핀
#define SERVO_PIN D5

//서보 클래스에서 MYSERVO로 객체 생성
Servo myServo;


void setup() {

//MYSERVO객체와 시그널 핀 신호 연결
 myServo.attach(SERVO_PIN);
 
}

void loop(){

  for( int angle =0; angle<170; angle++){
    myServo.write(angle);
    delay(50);
  }

  
}



