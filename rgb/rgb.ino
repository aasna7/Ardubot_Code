void setup() {
  // put your setup code here, to run once:
pinMode(5,OUTPUT);
pinMode(6,OUTPUT);
pinMode(7,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  GlowRed();
  delay(1000);
  GlowGreen();
  delay(1000);
  GlowBlue();
  delay(1000);

}
void GlowRed(){
  digitalWrite(5,HIGH);
  digitalWrite(6,LOW);
  digitalWrite(7,LOW);
  
  
  }

void GlowBlue(){
  digitalWrite(7,HIGH);
  digitalWrite(5,LOW);
  digitalWrite(6,LOW);
  
  }

void GlowGreen() {
  digitalWrite(6,HIGH);
  digitalWrite(5,LOW);
  digitalWrite(7,LOW);
  }
