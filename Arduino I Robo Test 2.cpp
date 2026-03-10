// C++ code
//
int Right = 0;

int Left = 0;

void setup()
{
  pinMode(4, INPUT);
  pinMode(5, INPUT);
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(7, OUTPUT);
}

void loop()
{
  Left = digitalRead(4);
  Right = digitalRead(5);
  if (Left == 0) {
    if (Right == 0) {
      digitalWrite(2, HIGH);
      digitalWrite(3, LOW);
      digitalWrite(6, HIGH);
      digitalWrite(7, LOW);
    }
  } else {
    if (Left == 1) {
      digitalWrite(2, HIGH);
      digitalWrite(3, LOW);
      digitalWrite(6, LOW);
      digitalWrite(7, HIGH);
      delay(500); // Wait for 1000 millisecond(s)
      digitalWrite(2, HIGH);
      digitalWrite(3, LOW);
      digitalWrite(6, HIGH);
      digitalWrite(7, LOW);
    }
    if (Right == 1) {
      digitalWrite(2, LOW);
      digitalWrite(3, HIGH);
      digitalWrite(6, HIGH);
      digitalWrite(7, LOW);
      delay(500); // Wait for 1000 millisecond(s)
      digitalWrite(2, HIGH);
      digitalWrite(3, LOW);
      digitalWrite(6, HIGH);
      digitalWrite(7, LOW);
    }
  }
}