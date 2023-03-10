#include <Servo.h>

Servo head;
Servo neck;
Servo tail;
Servo leftleg;
Servo leftthie;
Servo rightleg;
Servo rightthie;
Servo frontleftthie;
Servo frontleftleg;
Servo frontrightthie;
Servo frontrightleg;


void setup() {
  // put your setup code here, to run once:
tail.attach(12);
neck.attach(3);
head.attach(2);

//left leg

leftleg.attach(4);
leftthie.attach(5);
rightleg.attach(6);
rightthie.attach(7);
frontleftthie.attach(8);
frontleftleg.attach(9);
frontrightthie.attach(10);
frontrightleg.attach(11);
}

void loop() {
  // put your main code here, to run repeatedly:
  for(int i=30; i<160; i++){
  tail.write(i);
  delay(10);
  }
  
//for(int i=30; i>160; i--){
//  tail.write(i);
//  delay(10);
//  }

//left leg stand
leftleg.write(100);
leftthie.write(90);


//right leg stand
rightleg.write(100);
rightthie.write(90);


//left leg front  <============face direction         tail direction===============>
frontleftthie.write(60);
frontleftleg.write(70);



//right leg front
frontrightthie.write(100);
frontrightleg.write(90);
//
//neck.write(0);
//head.write(0);
//delay(100);
//neck.write(90);
//delay(60);
//head.write(90);
//delay(100);
//neck.write(180);
//delay(40);
//head.write(180);
//delay(100);
//neck.write(90);
//head.write(90);
//delay(1000);


head.write(90);


for(int i=0; i<180; i++){
  neck.write(i);
  }

  delay(2000);
}
