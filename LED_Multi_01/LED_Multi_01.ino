void setup() {
  // put your setup code here, to run once:
for(int i=2; i<10; i++){
  pinMode(i, OUTPUT);
}




}

void loop() {
  // put your main code here, to run repeatedly:

for(int i =2; i<10; i++){
  digitalWrite(i, HIGH);
  delay(200);
}
delay(200);

for(int i =9; i>0; i--){
  digitalWrite(i, LOW);
    delay(200);
}
delay(200);

}
