#include "WeMosPin.h"

#include <SoftwareSerial.h>

#define TX D6
#define RX D7

SoftwareSerial myBL(RX,TX);


void setup() {
  //블루투스 속도는 정해져잇음
myBL.begin(38400);

 Serial.begin(9600);
}

void loop(){

// 블루투스로부터 뭔가가 수신이 되면
if(myBL.available()){

  // 값을 읽어서 시리얼 모니터로 재전송
  Serial.write(myBL.read()); //read읽은 값이  char이므로 Serial.write()로 씀
}



  if(Serial.available()){
    myBL.write(Serial.read());
  }
}



