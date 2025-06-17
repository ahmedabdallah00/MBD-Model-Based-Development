#include "Complex.h"
#include "rtwtypes.h"

void setup() {
  // put your setup code here, to run once:
  Complex_initialize();
}

void loop() {
  // put your main code here, to run repeatedly:
  bool c_value_0 = digitalRead(2);
  bool c_value_1 = digitalRead(3);
  bool c_value_2 = digitalRead(4);
  bool c_value_3 = digitalRead(5);
  bool c_value = digitalRead(6);

  if(c_value_0 || c_value_1 || c_value_2 || c_value_3)
  {
    digitalWrite(7,1);
    digitalWrite(8,1);
    digitalWrite(9,1);
    digitalWrite(10,1);
    digitalWrite(11,1);
  }
  if(c_value==0)
  {
    digitalWrite(7,0);
    digitalWrite(8,0);
    digitalWrite(9,0);
    digitalWrite(10,0);
    digitalWrite(11,0);
  }
  delay(100);
}
