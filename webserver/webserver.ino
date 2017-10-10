#include<ESP8266WiFi.h>

char* ssid = "Your ssid";
char* password = "your password ";

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
