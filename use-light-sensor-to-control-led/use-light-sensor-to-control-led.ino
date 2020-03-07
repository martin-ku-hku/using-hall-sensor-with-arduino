const int ledPin = 13;
const int lightSensorPin = 2;

void setup() {
  // put your setup code here, to run once:
  pinMode(ledPin, OUTPUT);
  pinMode(lightSensorPin, INPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  int lightSensorStatus = digitalRead(lightSensorPin);
  
  if (lightSensorStatus == HIGH){ // higher than threshold
    digitalWrite(ledPin, HIGH);
  } else{
    digitalWrite(ledPin, LOW);
  }
}
