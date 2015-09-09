const int led1 = 2;
const int sens1 = 0;
const int led2 = 3;
const int sens2 = 1;
const int led3 = 4;
const int sens3 = 2;
const int led4 = 5;
const int sens4 = 3;
const int led5 = 6;
const int sens5 = 4;
const int led6 = 7;
const int sens6 = 5;

int val1 = 0;
int val2 = 0;
int val3 = 0;
int val4 = 0;
int val5 = 0;
int val6 = 0;


void setup()
{
  Serial.begin(9600);
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(led3, OUTPUT);
  pinMode(led4, OUTPUT);
  pinMode(led5, OUTPUT);
  pinMode(led6, OUTPUT);
  
  digitalWrite(led1, HIGH);
  digitalWrite(led2, HIGH);
  digitalWrite(led3, HIGH);
  digitalWrite(led4, HIGH);
  digitalWrite(led5, HIGH);
  digitalWrite(led6, HIGH);
}

void loop()
{
  val1 = analogRead(sens1);
  val2 = analogRead(sens2);
  val3 = analogRead(sens3);
  val4 = analogRead(sens4);
  val5 = analogRead(sens5);
  val6 = analogRead(sens6);
    
  Serial.print("Sensor 1: ");
  Serial.print(val1);
  
  Serial.print(" | Sensor 2: ");
  Serial.print(val2);
  
  Serial.print(" | Sensor 3: ");
  Serial.print(val3);
  
  Serial.print(" | Sensor 4: ");
  Serial.print(val4);
  
  Serial.print(" | Sensor 5: ");
  Serial.print(val5);
  
  Serial.print(" | Sensor 6: ");
  Serial.println(val6);
  
  if (val1 < 500) {
    digitalWrite(led1, LOW);
    delay(100);
  } else {
    digitalWrite(led1, HIGH);
    delay(100);
  }
  
  if (val2 < 400) {
    digitalWrite(led2, LOW);
    delay(100);
  } else {
    digitalWrite(led2, HIGH);
    delay(100);
  }
  
  if (val3 < 400) {
    digitalWrite(led3, LOW);
    delay(100);
  } else {
    digitalWrite(led3, HIGH);
    delay(100);
  }
  
  if (val4 < 400) {
    digitalWrite(led4, LOW);
    delay(100);
  } else {
    digitalWrite(led4, HIGH);
    delay(100);
  }
  
  if (val5 < 400) {
    digitalWrite(led5, LOW);
    delay(100);
  } else {
    digitalWrite(led5, HIGH);
    delay(100);
  }
  
  if (val6 < 400) {
    digitalWrite(led6, LOW);
    delay(100);
  } else {
    digitalWrite(led6, HIGH);
    delay(100);
  }
  
  delay(1000);
  
}
