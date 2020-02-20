void setup() {
  // put your setup code here, to run once:
  pinMode(12,OUTPUT);
  Serial.begin(9600);

}

void loop() {
  // put your main code here, to run repeatedly:
  int data=0;
  
  while(1)
  {
    int i=0;
  if(Serial.available())
  {
    data=Serial.read();
    for(;i<data;i++)
    {
      digitalWrite(12,HIGH);
      delay(600);
      digitalWrite(12,LOW);
      delay(600);
    }
    Serial.write(i);
    Serial.flush();
  }
}
}
