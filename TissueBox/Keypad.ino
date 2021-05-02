#include<Keyboard.h>

void setup() {
  // put your setup code here, to run once:
  pinMode(2,INPUT_PULLUP);
  pinMode(3,INPUT_PULLUP);
  Keyboard.begin();
}

void loop() {
  // put your main code here, to run repeatedly:
  while(digitalRead(2)==HIGH){
    Keyboard.press('x');
    delay(50);
    Keyboard.release('x');
  }
  while(digitalRead(3)==HIGH){
    Keyboard.press('y');
    delay(50);
    Keyboard.release('y');
  }
}
