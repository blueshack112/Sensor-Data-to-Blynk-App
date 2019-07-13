#include <SoftwareSerial.h>

SoftwareSerial s(3,1);
int data = 0;
boolean goPlus = true;

void setup() {
  // put your setup code here, to run once:
  s.begin(9600);
}

void loop() {
  if (data == 0)  
    goPlus = true;
  if (data == 500)
    goPlus = false;

  if(goPlus)
    data++;
  if(!goPlus)
    data--;
  s.write(data);
  delay(1000);
}
