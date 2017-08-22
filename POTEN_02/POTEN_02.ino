
byte leds[]={2,3,4,5,6,7,8,9};


void setup() {
  // put your setup code here, to run once:
  

Serial.begin(9600);
for(int i=0;i<8;i++){
pinMode(leds[i], OUTPUT);
  
}
}

void loop() {
  // put your main code here, to run repeatedly:

int volumn1 = analogRead(A0);

int volumn = map(volumn1,0,1023,0,200);

// PWM 포트에 출력
analogWrite(3,volumn);
analogWrite(5,volumn);
analogWrite(6,volumn);
analogWrite(9,volumn);

/*
for(int i =0; i<8; i++){
  digitalWrite(leds[i],HIGH);
}
delay(100);


for(int i =0; i<8; i++){
  digitalWrite(leds[i],LOW);
}
delay(100);

*/




Serial.print("Value: ");
Serial.println(volumn);

}




