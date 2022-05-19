#include <Servo.h>
#define potPin_1 A0
#define potPin_2 A1
#define pushButton 5

int val_1 = 45; int val_2 = 90; int flag = 1;

Servo myServo_x1;
Servo myServo_y1;
Servo myServo_x2;
Servo myServo_y2;
Servo myServo_x3;
Servo myServo_y3;
Servo myServo_x4;
Servo myServo_y4;

int pos = 0;    // variable to store the servo position

void setup() {
  Serial.begin(9600);
  Serial.print("hlo");
  pinMode(pushButton, INPUT);
  myServo_x1.attach(9);  // attaches the servo on pin 9 to the servo object
  myServo_y1.attach(10);
  myServo_x2.attach(11);
  myServo_y2.attach(12);
  myServo_x3.attach(4);
  myServo_y3.attach(5);
  myServo_x4.attach(6);
  myServo_y4.attach(7);
}

void loop() {
  int val_1 = analogRead(potPin_1);
  val_1 = map(val_1, 0, 1023, 0, 180);
  int val_2 = analogRead(potPin_2);
  val_2 = map(val_2, 0, 1023, 0, 180);
  if (digitalRead(pushButton) == HIGH && flag > 0 && flag < 4) {
    flag++;
  }
  else {
    flag == 1;
  }
  Serial.println(flag);
  switch (flag) {
    
    case 1: {
        myServo_x1.write(val_1);
        myServo_y1.write(val_2);
      }
    case 2: {
        myServo_x2.write(val_1);
        myServo_y2.write(val_2);
      }
    case 3: {
        myServo_x3.write(val_1);
        myServo_y3.write(val_2);
      }
    case 4: {
        myServo_x4.write(val_1);
        myServo_y4.write(val_2);
      }
  }
}
