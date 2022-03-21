#define A 2
#define B 4
#define C 3
#define D 5

#define BUTTON_PIN_1 6
//#define BUTTON_PIN_2 7
//#define BUTTON_PIN_3 8

#define NUMBER_OF_STEPS_PER_REV 512

#include <Stepper.h>

void setup(){
  Serial.begin(9600);
  pinMode(A,OUTPUT);
  pinMode(B,OUTPUT);
  pinMode(C,OUTPUT);
  pinMode(D,OUTPUT);
  pinMode(BUTTON_PIN_1,INPUT);
  //pinMode(BUTTON_PIN_2,INPUT);
  //pinMode(BUTTON_PIN_3,INPUT);
}

void write(int a,int b,int c,int d){
  digitalWrite(A,a);
  digitalWrite(B,b);
  digitalWrite(C,c);
  digitalWrite(D,d);
}

void onestep(){
  write(1,0,0,0);
  delay(1);
  write(1,1,0,0);
  delay(1);
  write(0,1,0,0);
  delay(1);
  write(0,1,1,0);
  delay(1);
  write(0,0,1,0);
  delay(1);
  write(0,0,1,1);
  delay(1);
  write(0,0,0,1);
  delay(1);
  write(1,0,0,1);
  delay(1);
}

void backstep(){
  write(1,0,0,1);
  delay(1);
  write(0,0,0,1);
  delay(1);
  write(0,0,1,1);
  delay(1);
  write(0,0,1,0);
  delay(1);
  write(0,1,1,0);
  delay(1);
  write(0,1,0,0);
  delay(1);
  write(1,1,0,0);
  delay(1);
  write(1,0,0,0);
  delay(1);
}

void update(){ //int button2, int button3
  int i;
  i=0;
  
  
  while(i<NUMBER_OF_STEPS_PER_REV){
    onestep();
    if (i == 0){
      delay(3000);
    } 
    i++;
  }
  delay(3000);
  while(i>0){
    backstep();
    i--;
  }
}

void loop(){
  //int x;
  //int y;
  //x=1;
  //y=1;
  if(digitalRead(BUTTON_PIN_1)) {
    update();
    //x=0;
    //y=0;
  }
  //if(digitalRead(BUTTON_PIN_2)){

  //}
  //if(digitalRead(BUTTON_PIN_3)){

  //}
}
