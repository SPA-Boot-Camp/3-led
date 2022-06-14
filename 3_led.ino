int led = 10;
int led1 = 11;
int led2 = 12;
void setup()
{
 pinMode(led, OUTPUT);
}
void loop()
{
  greenL();
  redL();
  yelloL();
}
void redL()
{
  digitalWrite(led, HIGH);
  delay(1000);
  digitalWrite(led, LOW);
  delay(10000);
}
void greenL()
{
  digitalWrite(led1, HIGH);
  delay(1000);
  digitalWrite(led1, LOW);
  delay(1000);
}
void yelloL()
{
  digitalWrite(led2, HIGH);
  delay(1000);
  digitalWrite(led2, LOW);
  delay(1000);
}
