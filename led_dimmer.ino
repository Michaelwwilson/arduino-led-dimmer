int LED = 11;
int pot = A0;

void setup() {
  pinMode(LED, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  int val = analogRead(pot);
  int brightness = map(val, 0, 1023, 0, 255);

  Serial.print("value = ");
  Serial.println(val);

  analogWrite(LED, brightness);

  delay(30);
}