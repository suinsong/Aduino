#include "WeMosPin.h"
#define PIEZO D2

int note[]={2093, 2349,2637, 2793, 3136,3520,3951,4186};//도레미파솔라시도

void setup() {
 

}

void loop(){
  for(int i =0; i<8; i++){
  tone(PIEZO, note[i],1000);//500헤르츠 주파수를 1초동안 
  delay(1000);
 //1초 쉬고

  }
}



