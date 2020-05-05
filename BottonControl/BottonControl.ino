void setup() {
  // put your setup code here, to run once:

  pinMode(13, OUTPUT);
  pinMode(2, INPUT_PULLUP);
}

boolean mode = 1;

void isChanged()
{
  static boolean i;
  for (;;)
  {
    delay(10);
    if (i == digitalRead(2))
    {
      i = !i;
      break;
    }
  }
}

void loop() { //two type

  //  // put your main code here, to run repeatedly:
  //  mode = digitalRead(2);
  //  if (mode)
  //    digitalWrite(13, LOW);
  //  else
  //    digitalWrite(13, HIGH);


  for (int i = 0; i < 2; i++)
  {
    isChanged();
  }

  digitalWrite(13, mode);
  mode = !mode;
}
