const byte trigger_Pin = 9;
const byte echo_Pin = 10;

unsigned long duration;
unsigned int distance;

void setup()
{
  Serial.begin(9600);
  pinMode(echo_Pin, INPUT);
  pinMode(trigger_Pin, OUTPUT);
}

void loop()
{
  digitalWrite(trigger_Pin, LOW);
  delay(1);
  digitalWrite(trigger_Pin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigger_Pin, LOW);
  
  duration = pulseIn(echo_Pin, HIGH);
  distance = duration * 0.017;
  
  Serial.print("\ndistancia em cm: ");
  Serial.print(distance);
  delay(100);
}