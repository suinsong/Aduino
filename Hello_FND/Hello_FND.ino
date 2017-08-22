#include "WeMosPin.h"


#define SEG_A D2
#define SEG_B D3
#define SEG_C D4
#define SEG_D D5
#define SEG_E D6
#define SEG_F D7
#define SEG_G D8

//세그먼트 온오프르 ㄹ위한 핀 설정
int segs[] = { SEG_A, SEG_B, SEG_C, SEG_D, SEG_E, SEG_F, SEG_G }; 


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
}
void loop() {
  // put your main code here, to run repeatedly:
for( int num =0; num<10; num++){
  for(int i =0; i<7; i++){
    int bit= bitRead(numbers[num],i);// 비트 단위로 뒤에서부터 읽음 i번
    digitalWrite(segs[i], bit);  }
    delay(500);

}

}
