void setup() {
  // put your setup code here, to run once:

for(int i=2; i<10;i++){

  pinMode(i, OUTPUT);
  
  }

}

int pos =2;
void loop() {

for( int i=2; i<10;i++){
digitalWrite(i, LOW);
  
}
digitalWrite(pos,HIGH);
pos++;
if(pos>10) pos=2;
delay(200);



}
