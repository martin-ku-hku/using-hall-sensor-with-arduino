const int hallSensorPin = 2;

void setup() {
  // put your setup code here, to run once:
  pinMode(hallSensorPin, INPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  int hallSensorStatus = digitalRead(hallSensorPin);
  
  if (hallSensorStatus == LOW){ // The magnet is near the sensor
    Serial.println("Magnet is detected!");
  } else{
    Serial.println("Magnet is not here!");
  }

  delay(1000);
}
