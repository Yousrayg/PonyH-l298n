int ENA = 5;
int ENB = 4;
int in1 = 6;
int in2 = 7;
int in3 = 8;
int in4 = 9;

void setup() {

  pinMode(ENA, OUTPUT);
  pinMode(ENB, OUTPUT);
  pinMode(in1, OUTPUT);
  pinMode(in2, OUTPUT);
  pinMode(in3, OUTPUT);
  pinMode(in4, OUTPUT);
}

void loop() {
  digitalWrite(ENA, HIGH);
  digitalWrite(in1, HIGH);
  digitalWrite(in2, LOW);
  delay(1000);
  digitalWrite(ENA, HIGH);
  delay(1000);
  analogWrite(ENA, 220);
  delay(1000);
  digitalWrite(ENA, HIGH);
  delay(1000);

  digitalWrite(ENB, HIGH);
  digitalWrite(in3, HIGH);
  digitalWrite(in4, LOW);
  delay(1000);
  digitalWrite(ENB, HIGH);
  delay(1000);
  analogWrite(ENB, 220);
  delay(1000);
  digitalWrite(ENB, HIGH);
  delay(1000);

}
