#include <Arduino.h>

/**
 * @file main.cpp
 * @brief Embedded Distance Measurement using Ultrasonic Sensor
 * @author kk161205
 * @date 2026-02-20
 *
 * @details
 * Initial project structure for HC-SR04 distance measurement.
 */

/* ===========================
   Global Definitions
   =========================== */
unsigned long duration = 0;
float distance = 0.0;

/** @brief TRIG pin connected to HC-SR04 */
const uint8_t TRIG_PIN = 9;

/** @brief ECHO pin connected to HC-SR04 */
const uint8_t ECHO_PIN = 10;

void setup() {

    Serial.begin(9600);

    while (!Serial) {
        ;
    }

    pinMode(TRIG_PIN, OUTPUT);
    pinMode(ECHO_PIN, INPUT);

    Serial.println("=================================");
    Serial.println(" Ultrasonic Distance System ");
    Serial.println(" Sensor Initialized ");
    Serial.println("=================================");
}

void loop() {

    Serial.println("---------------------------------");

    digitalWrite(TRIG_PIN, LOW);
    delayMicroseconds(2);

    digitalWrite(TRIG_PIN, HIGH);
    delayMicroseconds(10);
    digitalWrite(TRIG_PIN, LOW);

    duration = pulseIn(ECHO_PIN, HIGH);

    distance = (duration * 0.0343) / 2.0;

    Serial.print("Distance: ");
    Serial.print(distance);
    Serial.println(" cm");

    Serial.println("---------------------------------\n");

    delay(500);
}