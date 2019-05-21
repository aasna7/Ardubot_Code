#include <Ultrasonic.h>

Ultrasonic ultrasonic(2, 3);
int distance;


int motorpositive1=7;
int motornegative1=4;
int enable1=5;
int motorpositive2=11;
int motornegative2=10;
int enable2=9;
int echo1= 3;
int trigger1=2;
void setup() {
  // put your setup code here, to run once:
  pinMode(motorpositive1,OUTPUT);
  pinMode(motornegative1,OUTPUT);
  pinMode(enable1,OUTPUT);
  pinMode(motorpositive2,OUTPUT);
  pinMode(motornegative2,OUTPUT);
  pinMode(enable2,OUTPUT);
  Serial.begin(9600);
  delay(100);


}

void loop() {
  // put your main code here, to run repeatedly:
  ultra_sensor();
  motor_forward();
  if (distance<15)
  {
    motor_back();
    delay(500);
  }
}

void ultra_sensor()
{
  distance = ultrasonic.read();
  
  Serial.print("Distance in CM: ");
  Serial.println(distance);
  
  }

 void motor_forward()
 {
digitalWrite(motorpositive1,HIGH);
  digitalWrite(motornegative1,LOW);
  analogWrite(enable1,150*0.9);
  digitalWrite(motorpositive2,LOW);
  digitalWrite(motornegative2,HIGH);
  analogWrite(enable2,150*1);
  }

  void motor_right()
  {
    digitalWrite(motorpositive1,LOW);
  digitalWrite(motornegative1,LOW);
    digitalWrite(motorpositive2,LOW);
  digitalWrite(motornegative2,HIGH);
  analogWrite(enable2,150);
    }

    void motor_back()
    {digitalWrite(motorpositive1,LOW);
  digitalWrite(motornegative1,HIGH);
  analogWrite(enable1,150);
  digitalWrite(motorpositive2,HIGH);
  digitalWrite(motornegative2,LOW);
  analogWrite(enable2,150);
      
      }
    
