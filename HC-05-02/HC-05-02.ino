#include "WeMosPin.h"

#include <SoftwareSerial.h>

#define TX D6
#define RX D7

#define AIRCON D2
#define BOILER D3
#define F_LAMP D4



SoftwareSerial myBL(RX,TX);



void setup() {
  //블루투스 속도는 정해져잇음
myBL.begin(38400);

 Serial.begin(9600);


pinMode(AIRCON, OUTPUT);
pinMode(BOILER, OUTPUT);
pinMode(F_LAMP, OUTPUT);


}

void loop(){

//블루투스로부터 뭔가 수신이 되면
if(myBL.available()){
  char c = myBL.read();
  String msg= "";
  String msg1 = "";
  String msg2 ="";

  
  if(c =='A'){
    digitalWrite(AIRCON, !digitalRead(AIRCON);
    msg = (digitalRead(AIRCON) ==HIGH)? "ON":"OFF";
    myBL.print("  AIRCON : ");
    myBL.print(msg);

    
  }  if(c =='B'){
    digitalWrite(BOILER, !digitalRead(BOILER);
    msg = (digitalRead(BOILER) ==HIGH)? "ON":"OFF";
    myBL.print("  BOILER : ");
    myBL.print(msg);

    
  }  if(c =='C'){
    digitalWrite(F_LAMP, !digitalRead(F_LAMP);
     msg = (digitalRead(F_LAMP) ==HIGH)? "ON":"OFF";
    myBL.print("  F_LAMP : ");
    myBL.print(msg);

    
  } if(c =='X'){
    digitalWrite(AIRCON, LOW);
    digitalWrite(BOILER, LOW);
    digitalWrite(F_LAMP, LOW);
  }
  if(c=='S'){
    msg = (digitalRead(AIRCON) ==HIGH)? "ON":"OFF";
    myBL.print("  AIRCON : ");
    myBL.print(msg);
    msg1 = (digitalRead(BOILER) ==HIGH)? "ON":"OFF";
    myBL.print("  BOILER : ");
    myBL.print(msg1);
    msg2 = (digitalRead(F_LAMP) ==HIGH)? "ON":"OFF";
    myBL.print("  F_LMAP : ");
    myBL.print(msg2);

 

  }
  
  
  Serial.write(c);
}
if(Serial.available()){
  myBL.write(Serial.read());
}

}



