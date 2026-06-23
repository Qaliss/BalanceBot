const int ENA = 3;
const int IN1 = 4;
const int IN2 = 5;

const int ENB = 8;
const int IN3 = 6;
const int IN4 = 7;


void setup() {
  // put your setup code here, to run once:
  pinMode(ENA, OUTPUT);
  pinMode(IN1, OUTPUT);
  pinMode(IN2, OUTPUT);

  pinMode(ENB, OUTPUT);
  pinMode(IN3, OUTPUT);
  pinMode(IN4, OUTPUT);

  // motor speed
  analogWrite(ENA, 100);
  analogWrite(ENB, 100);

  digitalWrite(IN3, HIGH);
  digitalWrite(IN4, LOW);

  delay(3000);

  analogWrite(ENA, 0);
  analogWrite(ENB, 0);

  delay(1000);

  analogWrite(ENA, 100);
  analogWrite(ENB, 100);

  digitalWrite(IN3, LOW);
  digitalWrite(IN4, HIGH);

  delay(2000);

  analogWrite(ENA, 0);
  analogWrite(ENB, 0);
}

void loop() {
  // put your main code here, to run repeatedly:

}
