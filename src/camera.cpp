#include <Arduino.h>

const int cameraPin = 2;

void setup()
{
  pinMode(cameraPin, OUTPUT);

  digitalWrite(cameraPin, LOW); // Ensure the camera is off initially
  delay(1000);
  digitalWrite(cameraPin, HIGH); // Hold the camera power button
  delay(1000);                   // Wait for the camera to initialize
  digitalWrite(cameraPin, LOW);  // Release the camera power button
  delay(3000);                   // Make sure the camera is powered on
  digitalWrite(cameraPin, HIGH); // Start Recording
  delay(1000);                   // Wait for the camera to start recording
  digitalWrite(cameraPin, LOW);  // Keep the camera recording
}

void loop()
{
  // Nothing
}
