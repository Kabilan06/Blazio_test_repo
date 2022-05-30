void Servowrite() {
  
  if(left==1){
    
    if (x[k]>=angleMin_horPlane[k] && x[k]<=(angleMax_horPlane[k]-stepAngle)){
      x[k]+=stepAngle;
    }
    else{
      x[k]=angleMax_horPlane[k];
    }
    myServo[i+1].write(x[k]);
  }
  if(right==1){
    
    if (x[k]>=(angleMin_horPlane[k]+stepAngle)&&x[k]<=angleMax_horPlane[k]){
      x[k]-=stepAngle;
    }
    else{
      x[k]=angleMin_horPlane[k];
    }
    myServo[i+1].write(x[k]);
  }
  if(up==1){
    
    if (y[k]>=angleMin_camServo[k] && y[k]<=(angleMax_camServo[k]-stepAngle)){
      y[k]+=stepAngle;
    }
    else{
      y[k]=angleMax_camServo[k];
    }
    myServo[i].write(y[k]);
  }
  if(down==1){
    
    if (y[k]>=(angleMin_camServo[k]+stepAngle)&&y[k]<=angleMax_camServo[k]){
      y[k]-=stepAngle;
    }
    else{
      y[k]=angleMin_camServo[k];
    }
    myServo[i].write(y[k]);
  }
  if(reset==1){
    x[k] = 60;
    myServo[i+1].write(x[k]);
    y[k] = 90;
    myServo[i].write(y[k]);   
  }
  Serial.print("X = "); 
  Serial.print(x[k]); 
  Serial.print(";Y = "); 
  Serial.println(y[k]);   
}

//------------------------------------------------------------------------------------------------------------------------------//

//Storing Postions A,B,C,D
void storePos(flags flag){
  if (flag == f_1){
    A[i] = x[k];
    A[i+1] = y[k];    
  }

  if (flag == f_2){
    B[i] = x[k];
    B[i+1] = y[k];
  }

  if (flag == f_3){
    C[i] = x[k];
    C[i+1] = y[k];
  }

  if (flag == f_4){
    D[i] = x[k];
    D[i+1] = y[k];
  }
}

//------------------------------------------------------------------------------------------------------------------------------//

// Moving to Positions A,B,C,D
void setPosition(int pos1, int pos2){
  if (pos1 == A[i] && pos2 == A[i+1]){
    for(int n = 0;n = (abs(A[i]-x[k]))/stepAngle;n++){
    if(x[k]>A[i]){
    x[k]-=stepAngle;  
    }
    else if (x[k]<A[i]){
    x[k]+=stepAngle;
    }
    else{
    x[k] = A[i];
    }
  myServo[i+1].write(x[k]);
  //delay[k](60/stepAngle);
  }
  for(int n = 0;n = (abs(A[i+1]-y[k]))/stepAngle;n++){
  if(y[k]>A[i+1]){
    y[k]-=stepAngle;  
    }
    else if (y[k]<A[i+1]){
    y[k]+=stepAngle;
    }
    else{
    y[k] = A[i+1];
    }
  myServo[i].write(y[k]);
  //delay[k](60/stepAngle);
  }
  }

  if (pos1 == B[i] && pos2 == B[i+1]){
    for(int n = 0;n = (abs(B[i]-x[k]))/stepAngle;n++){
  if(x[k]>B[i]){
    x[k]-=stepAngle;  
    }
    else if (x[k]<B[i]){
    x[k]+=stepAngle;
    }
    else{
    x[k] = B[i];
    }
  myServo[i+1].write(x[k]);
  //delay[k](60/stepAngle);
  }
  for(int n = 0;n = (abs(B[i+1]-y[k]))/stepAngle;n++){
  if(y[k]>B[i+1]){
    y[k]-=stepAngle;  
    }
    else if (y[k]<B[i+1]){
    y[k]+=stepAngle;
    }
    else{
    y[k] = B[i+1];
    }
  myServo[i].write(y[k]);
  //delay[k](60/stepAngle);
  }
  }

  if (pos1 == C[i] && pos2 == C[i+1]){
    for(int n = 0;n = (abs(C[i]-x[k]))/stepAngle;n++){
  if(x[k]>C[i]){
    x[k]-=stepAngle;  
    }
    else if (x[k]<C[i]){
    x[k]+=stepAngle;
    }
    else{
    x[k] = C[i];
    }
  myServo[i+1].write(x[k]);
  //delay[k](60/stepAngle);
  }
  for(int n = 0;n = (abs(C[i+1]-y[k]))/stepAngle;n++){
  if(y[k]>C[i+1]){
    y[k]-=stepAngle;  
    }
    else if (y[k]<C[i+1]){
    y[k]+=stepAngle;
    }
    else{
    y[k] = C[i+1];
    }
  myServo[i].write(y[k]);
  //delay[k](60/stepAngle);
  }
  }

  if (pos1 == D[i] && pos2 == D[i+1]){
    for(int n = 0;n = (abs(D[i]-x[k]))/stepAngle;n++){
  if(x[k]>D[i]){
    x[k]-=stepAngle;  
    }
    else if (x[k]<D[i]){
    x[k]+=stepAngle;
    }
    else{
    x[k] = D[i];
    }
  myServo[i+1].write(x[k]);
  //delay[k](60/stepAngle);
  }
  for(int n = 0;n = (abs(D[i+1]-y[k]))/stepAngle;n++){
  if(y[k]>D[i+1]){
    y[k]-=stepAngle;  
    }
    else if (y[k]<D[i+1]){
    y[k]+=stepAngle;
    }
    else{
    y[k] = D[i+1];
    }
  myServo[i].write(y[k]);
  //delay[k](60/stepAngle);
  }
  }
}

//------------------------------------------------------------------------------------------------------------------------------//

void switchServos(){
  switch(servoSelectSlider){
    case 1:
    i=0;
    k=0;
    break;

    case 2:
    i=2;
    k=1;
    break;

    case 3:
    i=4;
    k=2;
    break;

    case 4:
    i=6;
    k=3;
    break;
  }
}
