/*
   Compilação 1.0
*/
#include <Arduino.h>
#include <ESP8266WiFi.h>

#define led LED_BUILTIN
void Pisca();
// ───────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────
//                             SETUP
// ───────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────
void setup(){
   Serial.begin(115200);   Serial.println("");   Serial.println("");
   pinMode(led,OUTPUT);
   digitalWrite(led,HIGH);

   WiFi.begin("rede2", "cacau12345");
   while (WiFi.status() != WL_CONNECTED){
      Serial.print(".");
      delay(50);
   }
   Serial.println("");
   Serial.print("Device Host Name: ");
   Serial.println(WiFi.hostname());
   Serial.print("Device MAC: ");
   Serial.println(WiFi.macAddress());
   Serial.print("IP address: ");
   Serial.println(WiFi.localIP());

   Pisca();
}

// ───────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────
//                             LOOP
// ───────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────
void loop(){

   //Pisca();
   //delay(1000);

   digitalWrite(led, LOW);
   delay(30);
   digitalWrite(led, HIGH);
   delay(1000);

}   
// ───────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────
//                             PISCA
// ───────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────────
void Pisca() {
   for (size_t i = 0; i < 3; i++) {
      digitalWrite(led, LOW);
      delay(30);
      digitalWrite(led, HIGH);
      delay(50);
   }
   delay(500);
}

