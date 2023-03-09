#include <Servo.h>

Servo Rightservo;
Servo Leftservo;
Servo Rightlegbtservo;
Servo Leftlegbtservo;
Servo Rightthieservo;
Servo Leftthieservo;

const int trigPin = 12;         //D12 to Trigger Pin of Ultrasonic Sensor 
const int echoPin = 13;         //D13 to Echo Pin of Ultrasonic Sensor


int duration = 0;
int distance = 0;

void setup() {


  int duration = 0;
  int distance = 0;


  // put your setup code here, to run once:
  Serial.begin(9600);

  // Attach servo to pin   (NOTE:Right servo's are even pins = 2,4,6 and Left servo's are odd pins = 3,5,7)
  Rightservo.attach(2);          //Right hand servo
  Leftservo.attach(3);           //Left hand servo

  Rightlegbtservo.attach(4);     //Right leg bottom servo
  Leftlegbtservo.attach(5);   //Left leg bottom servo

Rightthieservo.attach(6);   //Right thie servo
Leftthieservo.attach(7);   //Left thie servo
  
}


void homeposition(){
Rightservo.write(180);
Leftservo.write(0);
Rightthieservo.write(100);
Leftthieservo.write(90);
Rightlegbtservo.write(100);    
Leftlegbtservo.write(100);     
delay(2000);


  }

void handsup(){
 Rightservo.write(30);
Leftservo.write(130);
delay(2000);

 }

 void straighthands(){
 Rightservo.write(100);
Leftservo.write(80);
delay(2000);
}

void yoga(){
 //normal position
Rightlegbtservo.write(100);    
Leftlegbtservo.write(100);     
delay(2000);

//fold to left side
Rightlegbtservo.write(60);
Leftlegbtservo.write(140);
delay(2000);

 }


void wing(){
  Rightlegbtservo.write(140);
Leftlegbtservo.write(140);
delay(2000);

////normal position
Rightlegbtservo.write(100);
Leftlegbtservo.write(100);
delay(2000);

  }

void handsupdown(){
  
//right up and left down
Rightservo.write(30);
Leftservo.write(0);
delay(2000);

//right down left up
Rightservo.write(180);
Leftservo.write(130);
delay(2000);

  }

void sayhi(){
// Says hi two times  
Rightservo.write(30);
Leftservo.write(0);
delay(400);
Rightservo.write(120);
delay(2000);

Rightservo.write(30);
Leftservo.write(0);
delay(400);
Rightservo.write(120);
delay(2000);
  }


void pushpa(){

//right hand up and left hand down
Rightservo.write(30);
Leftservo.write(0);
delay(2000);

// Bot Face To Me
// left straight to me  and leg right normal position
Rightthieservo.write(0);
Leftthieservo.write(90);
delay(1000);

// left move
Leftlegbtservo.write(100);
delay(500);
Leftlegbtservo.write(50);
delay(300);
Leftlegbtservo.write(90);  //1
delay(500);
Leftlegbtservo.write(50);
delay(300);
Leftlegbtservo.write(90);  //2
delay(500);
Leftlegbtservo.write(50);
delay(300);
Leftlegbtservo.write(90);   //3
delay(500);
Leftlegbtservo.write(50);
delay(300);
Leftlegbtservo.write(90);   //4
delay(500);
Leftlegbtservo.write(50); 
delay(300);
Leftlegbtservo.write(90);   //5
delay(500);
Leftlegbtservo.write(50);
delay(300);
Leftlegbtservo.write(90);    //6
delay(500);


// home position
Rightthieservo.write(100);
Leftthieservo.write(90);

delay(300);

//right hand down left hand up
Rightservo.write(180);
Leftservo.write(130);
delay(2000);


//right move


Rightthieservo.write(100);    
Leftthieservo.write(180);

Rightlegbtservo.write(130);  
delay(500);
Rightlegbtservo.write(100);    //1
delay(300);
Rightlegbtservo.write(150);
delay(500); 
Rightlegbtservo.write(100);   //2
delay(300);
Rightlegbtservo.write(150);
delay(500);
Rightlegbtservo.write(100);    //3
delay(300);
Rightlegbtservo.write(150);
delay(500);
Rightlegbtservo.write(100);   //4
delay(300);
Rightlegbtservo.write(150);
delay(500);
Rightlegbtservo.write(100);    //5
delay(300);
Rightlegbtservo.write(150);
delay(500);
Rightlegbtservo.write(100);    //6
delay(300);
}



void rightlegwave(){
  /
//// face to me right leg
  
for( int i=0; i<145; i++){
  Rightlegbtservo.write(i); 
  delay(50);  
  }
for( int i=144; i<145; i--){
  Rightlegbtservo.write(i); 
  delay(50);  
  }
}


void leftlegwave(){
 for( int i=0; i<145; i++){
  Leftlegbtservo.write(i); 
  delay(50);  
  }
for( int i=144; i<145; i--){
  Leftlegbtservo.write(i); 
  delay(50);  
  }
  
  }
void loop() {
  // put your main code here, to run repeatedly:


// =================================  1 Using the Ultrasonic Sensor ======================================

// digitalWrite(trigPin, LOW);
//  delayMicroseconds(2);
//  digitalWrite(trigPin, HIGH);
//  delayMicroseconds(10);
//  digitalWrite(trigPin, LOW);  
//  duration = pulseIn(echoPin, HIGH);
//  distance = duration/58.2;
//  Serial.print("distance :");
//  Serial.println(distance);
//  if ( distance <= 40 )
//  {
//    homeposition();
//    handsup();
//    straighthands();
//    yoga();
//    wing();
//    handsupdown();
//    sayhi();
//  }
//  else
//  {
//    Serial.println("no object detected");
//  }




 // ================================= 2 Without Using Ultrasonic Sensor ==================================

    homeposition();
    handsup();
    straighthands();
    yoga();
    wing();
    handsupdown();
    sayhi();
    pushpa();
//  rightlegwave();
    //leftlegwave();

}
