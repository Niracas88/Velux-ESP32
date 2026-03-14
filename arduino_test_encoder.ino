int encoderPin = A0; // analoge pin
void setup() {
  Serial.begin(9600);
}

void loop() {
  int val = analogRead(encoderPin); // waarde 0-1023
  float voltage = val * (5.0 / 1023.0);
  Serial.println(voltage); // print spanning in Volt
  delay(100);
}