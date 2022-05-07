#define BLYNK_PRINT Serial
#define BLYNK_TEMPLATE_ID "TMPLib_y_MWa"
#define BLYNK_DEVICE_NAME "ESP32auth"
char auth[] = "05rXUDUL-DQRE8Ivzm3MvNj4fs2jsZPQ";

#include <BlynkSimpleEsp32.h>

#include <ESP32Servo.h>
#include "Value_settings.h"
#include "Servo_settings.h"
#include "Functions.h"

void setup()
{
  Serial.begin(115200);
  Blynk.begin(auth, "Retsamina", "a1ni2mas3ter48");
  myServo[0].attach(servo1);
  myServo[1].attach(servo2);
  myServo[0].write(x[k]);
  myServo[1].write(y[k]);
  myServo[2].attach(servo3);
  myServo[3].attach(servo4);
  myServo[2].write(x[k]);
  myServo[3].write(y[k]);
  myServo[4].attach(servo5);
  myServo[5].attach(servo6);
  myServo[4].write(x[k]);
  myServo[5].write(y[k]);
  myServo[6].attach(servo7);
  myServo[7].attach(servo8);
  myServo[6].write(x[k]);
  myServo[7].write(y[k]);
  timer1.setInterval(30, Servowrite);
  timer2.setInterval(30, switchServos);
}

//Blynk code for servo movement
BLYNK_WRITE(V0) { 
  up = param.asInt();
}

BLYNK_WRITE(V1) { 
  down = param.asInt(); 
}

BLYNK_WRITE(V2) { 
  left = param.asInt(); 
}

BLYNK_WRITE(V3) { 
  right = param.asInt();
}

//Blynk code for storing positions
BLYNK_WRITE(V20){
  int value = param.asInt();
  if (value && !lock){
    storePos(f_1);
  }
}
BLYNK_WRITE(V21){
  int value = param.asInt();
  if (value && !lock){
    storePos(f_2);
  }
}
BLYNK_WRITE(V22){
  int value = param.asInt();
  if (value && !lock){
    storePos(f_3);
  }
}
BLYNK_WRITE(V23){
  int value = param.asInt();
  if (value && !lock){
    storePos(f_4);
  }
}

BLYNK_WRITE(V10){
  int value = param.asInt();
  if (value){
    setPosition(A[i],A[i+1]);
  }
}
BLYNK_WRITE(V11){
  int value = param.asInt();
  if (value){
    setPosition(B[i],B[i+1]);
  }
}
BLYNK_WRITE(V12){
  int value = param.asInt();
  if (value){
    setPosition(C[i],C[i+1]);
  }
}
BLYNK_WRITE(V13){
  int value = param.asInt();
  if (value){
    setPosition(D[i],D[i+1]);
  }
}

BLYNK_WRITE(V100){
  stepAngle = param.asInt();
}

BLYNK_WRITE(V101){
  p_to_p_speed = param.asInt();
}

BLYNK_WRITE(V5){
  lock = param.asInt();
}

//Bly[k]nk code to reset to original position
BLYNK_WRITE (V6){
  reset = param.asInt();
}

BLYNK_WRITE (V7){
  servoSelectSlider = param.asInt();
}

void loop()
{
  Blynk.run();
  timer1.run();
  timer2.run();
}
