const int ledPin = 13;
const int hallSensorPin = 2;

void setup() {
  // put your setup code here, to run once:
  pinMode(ledPin, OUTPUT);
  pinMode(hallSensorPin, INPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  int hallSensorStatus = digitalRead(hallSensorPin);
  
  if (hallSensorStatus == LOW){ // The magnet is near the sensor
    digitalWrite(ledPin, HIGH);
  } else{
    digitalWrite(ledPin, LOW);
  }
}
