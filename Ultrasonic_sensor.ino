
int trigger = 2;
int echo = 3;

void setup()
{
  Serial.begin(9600);
  pinMode(trigger, OUTPUT);
  pinMode(echo, INPUT);
}
void loop()
{
  long duration, distance;
  digitalWrite(trigger,HIGH);
  delay(100);
  digitalWrite(trigger, LOW);
  duration=pulseIn(echo, HIGH);
  distance =(duration/2)/29.1;
  Serial.println(distance);
  Serial.println("cm");
  
  
  delay(100);
}
