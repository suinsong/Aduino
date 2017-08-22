void setup() {
  // put your setup code here, to run once:
      
      // 디지털 핀(0-13번까지)를 어떤 용도로 쓸 것인가를 설정
      pinMode(5,OUTPUT);  // 신호를 AR --->>> 외부로 보내겠다고 설정

      pinMode(4, OUTPUT); 
      pinMode(7, OUTPUT);
      //INPUT : 외부의 신호값을 읽어 들이겠다고 설정

}

void loop() {
  // put your main code here, to run repeatedly:

  //신호를 내보내는 명령
  digitalWrite(5, HIGH); //2진수에서 1의 값을 PIN5번에 보내라
  digitalWrite(4, LOW);
   digitalWrite(7,LOW);
  delay(1000); // 잠시 멈춤 (1초동안)
  digitalWrite(5,LOW);
  digitalWrite(4, HIGH);
  digitalWrite(7,HIGH);  
  delay(1000);






}
