int fan = 3;
int buzzer = 7;
int infra = 2;

void setup() {
  pinMode(fan, OUTPUT);
  pinMode(buzzer, OUTPUT);
  pinMode(13, OUTPUT);    // -----------> inbuilt LED on 13th pin of arduino uno
  pinMode(infra, INPUT);
  Serial.begin(9600);
}

void loop() {
  if (digitalRead(2) == LOW)
  {
    digitalWrite(13, HIGH);
    for (int i = 0; i < 20; i++)
    {
      analogWrite(fan, 255);
      tone(buzzer, 200);
      delay(30);
    }
    noTone(buzzer);
    delay(100);
  }
  else
  {
    analogWrite(fan, 0);
    digitalWrite(13, LOW);
  }
}
