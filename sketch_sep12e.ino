#include "WiFi.h"

const char* ssidList[] = {
    "Never gonna give you up",
    "Never gonna let you down",
    "Never gonna run around",
    "Never gonna make you cry"
    "Never gonna say goodbye"
    "Never gonna tell a lie",
};

int idx = 0;

void setup() {
    Serial.begin(115200);
    WiFi.mode(WIFI_OFF);
    delay(100);
    WiFi.softAP(ssidList[idx]);
}

void loop() {
    delay(5000);
    WiFi.softAP(ssidList[++idx % (sizeof(ssidList) / sizeof(ssidList[0]))]);
}
