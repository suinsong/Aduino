void setup() {
  // put your setup code here, to run once:
for(int i=2; i<10; i++){
  pinMode(i, OUTPUT);
}
}

int decNum=0;
int pos=2;
void loop() {
  // put your main code here, to run repeatedly:

// decNum숫자를 2진수로 바꾸고, 0번bit부터 8번 bit까지 순차적으로 추출하여 
// 그 값을 D2부터 9번에 출력하여 LED가 2진수를 표현하도록 한다

for(int i=0; i<8; i++){

  int bit=bitRead(decNum,i);
  digitalWrite(pos++,bit);
  
}
delay(1000);
if(decNum++ >255) decNum=0;
pos=2;
}











