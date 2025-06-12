#include "traffic_light.h"
#include "rtwtypes.h"

void setup() {
  // put your setup code here, to run once:
  traffic_light_initialize();
}

void loop() {
  // put your main code here, to run repeatedly:
  traffic_light_step0();

    // Check if it's time to execute the sub-rate step function (TID 1, 0.1s).
  if (rtmStepTask(rtM, 1)) {
      traffic_light_step1();
  }
  
}
