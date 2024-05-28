int limit;

void setup() {
  Serial.begin(9600);

}

void loop() {
  limit = analogRead(A0);
  Serial.println(limit);
  delay(1000);

}
