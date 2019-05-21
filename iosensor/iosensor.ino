
void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
pinMode(A1,INPUT);
pinMode(6,OUTPUT);
pinMode(7,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  int value=analogRead(A1);
Serial.println(value);
delay(100);
if (value>=100)
{
  digitalWrite(7,HIGH);
  digitalWrite(6,LOW);
  }
 else 
 {
  digitalWrite(6,HIGH);
  digitalWrite(7,LOW);
 }















  
}
