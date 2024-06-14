/*
    Project name : LDR photo resistor module
    Modified Date: 14-06-2024
    Code by : Projectslearner
    Website : https://projectslearner.com/learn/arduino-mega-ldr-photo-resistor-module
*/

const int ldrPin = A0; // Analog pin connected to the LDR

void setup() {
  Serial.begin(9600); // Initialize serial communication
}

void loop() {
  // Read the voltage from the LDR
  int sensorValue = analogRead(ldrPin);

  // Print the sensor value (light intensity) to the Serial Monitor
  Serial.print("Light Intensity: ");
  Serial.println(sensorValue);

  delay(500); // Delay for readability
}
