const int trig = A4;
const int echo = A5;

const int LED1 = 2;
const int LED2 = 3;
const int LED3 = 4;
const int LED4 = 5;
const int LED5 = 6;
const int LED6 = 7;
const int LED7 = 8;
const int LED8 = 9;
const int LED9 = 10;
const int LED10 = 11;
int duration = 0;
int distance = 0;

void setup() 
{
  pinMode(trig , OUTPUT);
  pinMode(echo , INPUT);
  
  pinMode(LED1 , OUTPUT);
  pinMode(LED2 , OUTPUT);
  pinMode(LED3 , OUTPUT);
  pinMode(LED4 , OUTPUT);
  pinMode(LED5 , OUTPUT);
  pinMode(LED6 , OUTPUT);
  pinMode(LED7 , OUTPUT);
  pinMode(LED8 , OUTPUT);
  pinMode(LED9 , OUTPUT);
  pinMode(LED10 , OUTPUT);
  
  Serial.begin(9600);

}

void loop()
{
  digitalWrite(trig , LOW);
  delayMicroseconds(2);
  
  digitalWrite(trig , HIGH);
  delayMicroseconds(10);
  digitalWrite(trig , LOW);

  duration = pulseIn(echo , HIGH);
  distance = duration*0.034/2 ;
  Serial.println(distance);
  

  if ( distance <= 3 )
  {
    digitalWrite(LED1, HIGH);
  }
  else
  {
    digitalWrite(LED1, LOW);
  }
  if ( distance <= 6 )
  {
    digitalWrite(LED2, HIGH);
  }
  else
  {
    digitalWrite(LED2, LOW);
  }
  if ( distance <= 9 )
  {
    digitalWrite(LED3, HIGH);
  }
  else
  {
    digitalWrite(LED3, LOW);
  }
  if ( distance <= 12 )
  {
    digitalWrite(LED4, HIGH);
  }
  else
  {
    digitalWrite(LED4, LOW);
  }
  if ( distance <= 15 )
  {
    digitalWrite(LED5, HIGH);
  }
  else
  {
    digitalWrite(LED5, LOW);
  }
  if ( distance <= 18 )
  {
    digitalWrite(LED6, HIGH);
  }
  else
  {
    digitalWrite(LED6, LOW);
  }
  if ( distance <= 21 )
  {
    digitalWrite(LED7, HIGH);
  }
  else
  {
    digitalWrite(LED7, LOW);
  }
  if ( distance <= 24 )
  {
    digitalWrite(LED8, HIGH);
  }
  else
  {
    digitalWrite(LED8, LOW);
  }
  if ( distance <= 27 )
  {
    digitalWrite(LED9, HIGH);
  }
  else
  {
    digitalWrite(LED9, LOW);
  }
  if ( distance <= 30 )
  {
    digitalWrite(LED10, HIGH);
  }
  else
  {
    digitalWrite(LED10, LOW);
  }
}
