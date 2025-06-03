#include <Arduino.h>

const int IN1 = 11;
const int IN3 = 19;
const int IN4 = 12;

// This code is for Deciding which camera is transmitting

void setup()
{
    pinMode(IN1, OUTPUT);
    pinMode(IN3, OUTPUT);
    pinMode(IN4, OUTPUT);
    delay(6000); // Wait for the cameras to initialize

    // Top Camera On
    digitalWrite(IN1, HIGH);// Turns Off Top Camera
    digitalWrite(IN3, HIGH);// Turns On Top Camera
    delay(5000);

    // Aft Camera On
    digitalWrite(IN3, LOW);// Turns Off Aft Camera
    digitalWrite(IN4, HIGH);// Turns On Aft Camera
    delay(5000);

    // Side Camera On
    digitalWrite(IN4, LOW);// Turns Off Side Camera
    digitalWrite(IN1, LOW);// Turns On Side Camera
}

void loop()
{
    // For this version, it is going to loop through the cameras with a delay

    // Top Camera transmitting
    digitalWrite(IN1, HIGH);
    digitalWrite(IN3, HIGH);
    digitalWrite(IN4, LOW);
    delay(3000);  // Show top camera for 3 seconds

    // Side Camera transmitting
    digitalWrite(IN1, LOW);
    digitalWrite(IN3, LOW);
    digitalWrite(IN4, LOW);
    delay(1000);  // Show side camera for 5 seconds
    
    // Aft Camera transmitting
    digitalWrite(IN1, HIGH);
    digitalWrite(IN3, LOW);
    digitalWrite(IN4, HIGH);
    delay(3000);  // Show aft camera for 3 seconds
    
    // Side Camera transmitting
    digitalWrite(IN1, LOW);
    digitalWrite(IN3, LOW);
    digitalWrite(IN4, LOW);
    delay(1000);  // Show side camera for 5 seconds
}
