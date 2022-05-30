//Initialising variables used in function to switch between servos 
int i = 0;int k = 1;

//------------------------------------------------------------------------------------------------------------------------------//

#define servo1 13
#define servo2 14
#define servo3 26
#define servo4 27
#define servo5 32
#define servo6 33
#define servo7 34
#define servo8 35

Servo myServo1;
Servo myServo2;
Servo myServo3;
Servo myServo4;
Servo myServo5;
Servo myServo6;
Servo myServo7;
Servo myServo8;

Servo myServo[] = {myServo1,myServo2,myServo3,myServo4,myServo5,myServo6,myServo7,myServo8};

//------------------------------------------------------------------------------------------------------------------------------//

//Servo position store (setPosition) variables
int A_1 = 0,A_2 = 0,A_3 = 0,A_4 = 0,A_5 = 0,A_6 = 0,A_7 = 0,A_8 = 0;
int B_1 = 0,B_2 = 0,B_3 = 0,B_4 = 0,B_5 = 0,B_6 = 0,B_7 = 0,B_8 = 0;
int C_1 = 0,C_2 = 0,C_3 = 0,C_4 = 0,C_5 = 0,C_6 = 0,C_7 = 0,C_8 = 0;
int D_1 = 0,D_2 = 0,D_3 = 0,D_4 = 0,D_5 = 0,D_6 = 0,D_7 = 0,D_8 = 0;
int A[] = {A_1,A_2,A_3,A_4,A_5,A_6,A_7,A_8};
int B[] = {B_1,B_2,B_3,B_4,B_5,B_6,B_7,B_8};
int C[] = {C_1,C_2,C_3,C_4,C_5,C_6,C_7,C_8};
int D[] = {D_1,D_2,D_3,D_4,D_5,D_6,D_7,D_8};

//------------------------------------------------------------------------------------------------------------------------------//

//Servo Movement,lock and reset variables initialisation
int up = 0,down = 0,left = 0,right = 0;
int lock = 0;
int reset = 0;

//flag variables
typedef enum flags{
  f_1,f_2,f_3,f_4
};

//------------------------------------------------------------------------------------------------------------------------------//

//Servo Settings
//Servo Set 1
int angleMax_camServo1 = 225;  //225 | Servo attached to the camera
int angleMin_camServo1 = 60;   //60

int angleMax_horPlane1 = 200;  //200 | Servo responsible for movement on the horizontal plane
int angleMin_horPlane1 = 0;    //0

//Servo Set 2
int angleMax_camServo2 = 120;  //225 | Servo attached to the camera
int angleMin_camServo2 = 30;   //60

int angleMax_horPlane2 = 120;  //200 | Servo responsible for movement on the horizontal plane
int angleMin_horPlane2 = 45;    //0

//Servo Set 3
int angleMax_camServo3 = 225;  //225 | Servo attached to the camera
int angleMin_camServo3 = 60;   //60

int angleMax_horPlane3 = 200;  //200 | Servo responsible for movement on the horizontal plane
int angleMin_horPlane3 = 0;    //0

//Servo Set 4
int angleMax_camServo4 = 120;  //225 | Servo attached to the camera
int angleMin_camServo4 = 30;   //60

int angleMax_horPlane4 = 120;  //200 | Servo responsible for movement on the horizontal plane
int angleMin_horPlane4 = 45;    //0

int angleMax_camServo[]={angleMax_camServo1,angleMax_camServo2,angleMax_camServo3,angleMax_camServo4};
int angleMin_camServo[]={angleMin_camServo1,angleMin_camServo2,angleMin_camServo3,angleMin_camServo4};
int angleMax_horPlane[]={angleMax_horPlane1,angleMax_horPlane2,angleMax_horPlane3,angleMax_horPlane4};
int angleMin_horPlane[]={angleMin_horPlane1,angleMin_horPlane2,angleMin_horPlane3,angleMin_horPlane4};

//------------------------------------------------------------------------------------------------------------------------------//

//Servo degrees per loop increment. 
int stepAngle = 1;      //2 may be too fast for swivelling between two halves of basketball court. Default set at 1.
int p_to_p_speed = 1;   //in case a separate slider is reqd. to move to set positions, default speed is set to 1.

//------------------------------------------------------------------------------------------------------------------------------//

//positions/angle of each set of servos
//Servo set 1
float x_1 = 90;
float y_1 = 90;

//Servo set 2
float x_2 = 90;
float y_2 = 90;

//Servo set 3
float x_3 = 90;
float y_3 = 90;

//Servo set 4
float x_4 = 90;
float y_4 = 90;

float x[]={x_1,x_2,x_3,x_4};
float y[]={y_1,y_2,y_3,y_4};

//------------------------------------------------------------------------------------------------------------------------------//

//Servo switch slider initialisation
int servoSelectSlider = 1;
