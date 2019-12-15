#include <Servo.h>
Servo simpanData;
int pos = 00;

void setup(){
  simpanData.attach(7);
}

void loop(){
  for (pos = 00; pos < 180; pos +=1){
    simpanData.write(pos);
    delay(15);
  }
  for(pos = 180; pos >= 1; pos -= 1){
    simpanData.write(pos);
    delay(15);
  }
}
