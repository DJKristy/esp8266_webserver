#include<ESP8266WiFi.h>

char* ssid = "abcd";
char* password = "123456789";

void setup()
{
WiFi.begin(ssid,password);

