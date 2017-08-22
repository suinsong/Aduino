#include "WeMosPin.h"

//각 숫자를 만드는 신호선
#define SEG_A D2
#define SEG_B D3
#define SEG_C D4
#define SEG_D D5
#define SEG_E D6
#define SEG_F D7
#define SEG_G D8

//숫자의 자릿수
#define FND_01 D9  //6
#define FND_02 D10  //8
#define FND_03 D11  //9
#define FND_04 D12  //12


//세그먼트 온오프르 ㄹ위한 핀 설정
int segs[] = { SEG_A, SEG_B, SEG_C, SEG_D, SEG_E, SEG_F, SEG_G }; 
int selFnd[]={ FND_01,FND_02,FND_03,FND_04};

byte numbers[] = {//이거 거꾸로 써져있는거임(010101이거 비트리드가 거꾸로 읽음)
    B0111111,  // MSB   --  LSB
    B0000110,
    B1011011,
    B1001111,
    B1100110,
    B1101101,
    B1111101,
    B0000111,
    B1111111,
    B1101111
};



void setup() {
  // put your setup code here, to run once:
  for(int i =0; i<7; i++){
    pinMode(segs[i], OUTPUT);
}
 for( int i=0;  i <4 ; i++){
  pinMode(selFnd[i],OUTPUT);
  digitalWrite(selFnd[i],HIGH); //FND가 HIGH일때 OFF/ LOW일때 ON
 }

}


int intCnt = 0;

void loop() {

  unsigned long start = millis(); 
   intCnt++;
   
  for( unsigned long j =0; j<1000;  j=millis() - start ){
      int num1 =intCnt % 10; //1의 자리
      int num10 = (intCnt /10)%10 ;// 10의 자리
      int num100 = (intCnt/100)%10; // 100의 자리
      int num1000 = (intCnt/1000)%10; //1000의 자리

  digitalWrite(FND_01, LOW);
  setNumber(numbers[num1]); //1의자리표시
  delay(5);
  digitalWrite(FND_01,HIGH);


  digitalWrite(FND_02, LOW);
  setNumber(numbers[num10]); //10의자리표시
  delay(5);
  digitalWrite(FND_02,HIGH);
  
  digitalWrite(FND_03, LOW);
  setNumber(numbers[num100]); //100의자리표시
  delay(5);
  digitalWrite(FND_03,HIGH);
  
  digitalWrite(FND_04, LOW);
  setNumber(numbers[num1000]); //1000의자리표시
  delay(5);
  digitalWrite(FND_04,HIGH);

  }
  
 
  

 // delay(1000);
  
/*
  for(int num=0; num<5; num++){ 
    int number=numbers[num];

    digitalWrite(selFnd[num], LOW);

    for(int i =0; i<7; i++){
      int bit = bitRead(number,i);
      digitalWrite(segs[i], bit);
    }
    delay(5);
    digitalWrite(selFnd[num],HIGH);
  }

  */
}

void setNumber(int number){
  for(int i =0; i<7; i++){
    int bit = bitRead(number,i);
    digitalWrite(segs[i], bit);
    
  }
  
}



