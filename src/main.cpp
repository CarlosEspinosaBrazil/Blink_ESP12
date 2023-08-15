#include <Arduino.h>

size_t count = 3;

void setup() {
    pinMode(LED_BUILTIN,OUTPUT);
    digitalWrite(LED_BUILTIN,HIGH);
}

void loop() {
    for (size_t i = 0; i < count; i++){
        digitalWrite(LED_BUILTIN,LOW);
        delay(35);
        digitalWrite(LED_BUILTIN,HIGH);
        delay(55);
    }
    delay(500);
    delay(100);
}

