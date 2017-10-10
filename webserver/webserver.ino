#include<ESP8266WiFi.h>

char* ssid = "abcd";
char* password = "123456789";

void setup()
{
WiFi.begin(ssid,password);
Serial.begin(115200);
while(WiFi.status()!=WL_CONNECTED)
{
Serial.print(".");
delay(500);
}
Serial.println("");
Serial.print("IP Address");
Serial.print(WiFi.localIP());
}
