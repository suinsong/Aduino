
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

int pos=map(volumn1,0,1023,0,7);
digitalWrite(leds[pos],HIGH);
for(int i=0; i<8; i++){
  if(pos !=i)digitalWrite(leds[i],LOW);
}


Serial.print("Value: ");
Serial.println(volumn1);

}




