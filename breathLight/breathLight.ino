boolean button1;
boolean button2;
int ledPin = 9;
int theta = 0;
float brightness = 255;
float i = 0;
void setup() {
  // put your setup code here, to run once:
  pinMode(2,INPUT_PULLUP);
  pinMode(8,INPUT_PULLUP);
  pinMode(ledPin, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  button1 = digitalRead(2);
  button2 = digitalRead(8);
  if(!button1 && i>=0 && i<50)
  {
    i+=0.05;
  }
  else if(!button2 && i > 0 && i<= 50)
  {
    i-=0.05;
  }
  brightness = (float)sin(theta/180.0*3.14)*127.5+127.5;
  theta++;
  analogWrite(ledPin, brightness);
  Serial.println(i);
  
  delay(i);
}
