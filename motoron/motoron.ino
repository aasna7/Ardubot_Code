int motorpositive1=7;
int motornegative1=4;
int enable1=5;
int motorpositive2=11;
int motornegative2=10;
int enable2=9;
void setup() {
  // put your setup code here, to run once:
  pinMode(motorpositive1,OUTPUT);
  pinMode(motornegative1,OUTPUT);
  pinMode(enable1,OUTPUT);
  pinMode(motorpositive2,OUTPUT);
  pinMode(motornegative2,OUTPUT);
  pinMode(enable2,OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
movemotor();
}

void movemotor()
{
  digitalWrite(motorpositive1,HIGH);
  digitalWrite(motornegative1,LOW);
  analogWrite(enable1,150);
  digitalWrite(motorpositive2,LOW);
  digitalWrite(motornegative2,HIGH);
  analogWrite(enable2,150);
  
  }
