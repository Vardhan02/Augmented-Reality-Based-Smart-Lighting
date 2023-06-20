/* Comment this out to disable prints and save space */
#define BLYNK_PRINT Serial

/* Fill in information from Blynk Device Info here */
#define BLYNK_TEMPLATE_ID "TMPLT9Y3s7rN"
#define BLYNK_TEMPLATE_NAME "Quickstart Template"
#define BLYNK_AUTH_TOKEN "hEXiWrIKlswnZI1jTiugW0Rc0g5pgzkE"

#include <WiFi.h>
#include <WiFiClient.h>
#include <BlynkSimpleEsp32.h>

//You should get Auth Token in the Blynk App.
//Go to the Project Settings (nut icon).
char auth[] = BLYNK_AUTH_TOKEN;

// Your WiFi credentials.
// Set password to "" for open networks.
char ssid[] = "Vardhan's Galaxy M51";
char pass[] = "nowifi4u##";

BLYNK_WRITE(V1) {
  int pinValue = param.asInt();
  digitalWrite(15, pinValue);
  //process received value
}

BLYNK_WRITE(V2) {
  int pinValue = param.asInt();
  digitalWrite(13, pinValue);
  //process received value
}

BLYNK_WRITE(V3) {
  int pinValue = param.asInt();
  digitalWrite(14, pinValue);
  //process received value
}

BLYNK_WRITE(V4) {
  int pinValue = param.asInt();
  digitalWrite(12, pinValue);
  //process received value
}

void setup() {
  // Debug console
  Serial.begin(9600);
  pinMode(12, OUTPUT);
  pinMode(13, OUTPUT);
  pinMode(14, OUTPUT);
  pinMode(15, OUTPUT);
  WiFi.begin(ssid, pass);
  Blynk.config(auth);
}

void loop() {
  Blynk.run();
}
