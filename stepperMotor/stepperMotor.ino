#define WEIGHT 0.965
void setup() {
  // put your setup code here, to run once:
  for (int i = 9; i < 13; i++)
  {
    pinMode(i, OUTPUT);
  }
}
void stepIn(float num, bool isClockWise, float w)
{

  if (isClockWise) {
    for (int i = 0; i < 6 * w * num + 1; i++)
    {
      digitalWrite(i % 4 + 9, HIGH);
      delay(2);
      digitalWrite(i % 4 + 9, LOW);

    }
  }
  else {
    for (int i = 6 * w * num; i > -1; i--)
    {
      digitalWrite(i % 4 + 9, HIGH);
      delay(2);
      digitalWrite(i % 4 + 9, LOW);

    }
  }

}
void loop() {
  // put your main code here, to run repeatedly:
  stepIn(180, 1,WEIGHT);
  delay(1000);
  stepIn(180, 0,WEIGHT);
  delay(1000);
}
