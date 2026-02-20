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
}