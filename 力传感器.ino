int fsrPin = 0;
int fsrPin2 = 2; // A0 接口
int fsrReading, fsrReading2;
void setup(void) {
  Serial.begin(9600);
}
void loop(void) {
  fsrReading = analogRead(fsrPin);
  fsrReading2 = analogRead(fsrPin2);
  Serial.print("Analog reading = ");
  Serial.print(fsrReading);
  if (fsrReading < 10) {
    Serial.println(" - No pressure");
  } else if (fsrReading < 200) {
    Serial.println(" - Light touch");
  } else if (fsrReading < 500) {
    Serial.println(" - Light squeeze");
  } else if (fsrReading < 800) {
    Serial.println(" - Medium squeeze");
  } else {
    Serial.println(" - Big squeeze");
  }
  Serial.print("Analog reading2 = ");
  Serial.print(fsrReading2);
  if (fsrReading2 < 10) {
    Serial.println(" - No pressure");
  } else if (fsrReading2 < 200) {
    Serial.println(" - Light touch");
  } else if (fsrReading2 < 500) {
    Serial.println(" - Light squeeze");
  } else if (fsrReading2 < 800) {
    Serial.println(" - Medium squeeze");
  } else {
    Serial.println(" - Big squeeze");
  }
  delay(1000);
}
