void setup() {
  // put your setup code here, to run once:
  pinMode(5, OUTPUT);
  pinMode(4, OUTPUT);

  //스위치 연결 시 이렇게 해줘야 함
  pinMode(3, INPUT_PULLUP);


  
}

void loop() {

  
//스위치가 off인 상태
if(digitalRead(3) == HIGH){
  digitalWrite(5, LOW);
  digitalWrite(4, HIGH);
}else{
digitalWrite(4, LOW);
digitalWrite(5, HIGH);


  
//  digitalWrite(5, HIGH);
//  delay(500);
//  digitalWrite(5, LOW);
//  delay(500);
  


  
}
  // put your main code here, to run repeatedly:
//  digitalWrite(5, HIGH);
//  delay(1000);F
//  digitalWrite(5, LOW);
//  delay(1000);







}
