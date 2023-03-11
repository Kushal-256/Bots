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





void home(){

  
//    for(int i=30; i<160; i++){
//  tail.write(i);
//  delay(10);
//  }
//  
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


//for(int i=0; i<180; i++){
//  neck.write(i);
//  }
//
//  delay(2000);
  
  }



///sit position

void sitcat(){
  
//back
leftleg.write(180);
leftthie.write(100);

rightleg.write(10);
rightthie.write(90);

//front

frontleftleg.write(180);
frontleftthie.write(80);

frontrightleg.write(0);
frontrightthie.write(100);

delay(1000);

  }


void tail_move(){
 
 //tail move
   for(int i=30; i<160; i++){
  tail.write(i);
  delay(10);
   }
  for(int u=160; u>30; u--){
   tail.write(u);
   delay(10); 
    }
  
  }



void neck_move(){
  
  //move head to left 

for (int h=50; h<130; h++){
  neck.write(h);
  delay(10);
  }

  //move head to right

  for (int k=130; k>50; k--){
    neck.write(k);
    delay(10);
    }

  
  }


void head_up_down(){


for (int m=120; m>60; m--){
  head.write(m);
  delay(100);
 
  }

  
  for (int b=0; b<80; b++){
   head.write(b);
   delay(100);
    }

  
  }


void half_sit(){
  
  
  ///back sit and front stand

//front
frontrightleg.write(50);
frontrightthie.write(50);

frontleftthie.write(130);
frontleftleg.write(120);


//back
leftleg.write(170);
leftthie.write(120);

rightleg.write(20);
rightthie.write(70);


  }

  
void sayhi(){




 
//front
frontrightleg.write(50);
frontrightthie.write(50);

frontleftthie.write(130);
frontleftleg.write(120);


//back
leftleg.write(170);
leftthie.write(120);

rightleg.write(20);
rightthie.write(70);






  //front right thie raise
  
  frontrightthie.write(150);
  //hi
for(int i=0;i<60;i++){
  frontrightleg.write(i);
  delay(10);
  }
  for(int d=60;d>0;d--){
  frontrightleg.write(d);
  delay(10);
  }
  
  }





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

neck.write(90);
}


void crawl(){
  
  
//Sits on the floor with legs out



//Back legs out 
leftleg.write(30);
leftthie.write(100);

rightleg.write(180);
rightthie.write(100);

//Front legs out 

frontleftleg.write(180);
frontleftthie.write(80);

frontrightleg.write(0);
frontrightthie.write(100);
  
  
  }

  
void loop() {
  // put your main code here, to run repeatedly:


//============================================Cat_Movements==============================================
//========================Sits and shake the tail and stand and move the head============================

  

//Neck moves left and right and right to left
neck_move();


delayMicroseconds(10);


//crawl position

crawl();

//Tail moves 

tail_move();

//Stand position
home();
delay(1500);

half_sit();

delay(2500);

sitcat();

delay(2000);



























}
