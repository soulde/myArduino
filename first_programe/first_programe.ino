void setup()
{
  //set LEDs for feedback
  pinMode(12, OUTPUT);
  pinMode(7, OUTPUT);

  //set Serialport
  Serial.begin(9600);
}

int data = 0;
int i;
void loop()
{
  while (1)
  {
    if (Serial.available())
    {
      //recieve the data for computer
      data = Serial.read();
      delay(100);
      //data is the int angle in c++ code,to minimize the blink times
      data %= 10;

      //blink
      for (i = 0; i < data; i++)
      {
        digitalWrite(12, HIGH);
        delay(400);
        digitalWrite(12, LOW);
        delay(400);
      }

      //send a single as sending data back to computer
      digitalWrite(7, HIGH);
      delay(500);
      digitalWrite(7, LOW);
      delay(500);

      Serial.write(i);

      //wait for sending code finished
      Serial.flush();

      //clear the datas in flash
      for (; Serial.read() >= 0;);
    }
  }
}
