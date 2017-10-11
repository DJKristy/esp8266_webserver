#include <ESP8266WiFi.h>
#include <WiFiClient.h> 
#include <ESP8266WebServer.h>

char* ssid = "ssid";
char* password = "pwd";

ESP8266WebServer server;




void setup() {
  delay(1000);
  Serial.begin(115200);
  Serial.println();
  Serial.print("Configuring access point...");
  WiFi.softAP(ssid, password);

  IPAddress myIP = WiFi.softAPIP();
  Serial.print("AP IP address: ");
  Serial.println(myIP);
   server.on("/",[](){server.send(200,"text/plain","Hello world");});
    server.begin();
  Serial.println("HTTP server started");
}

void loop() {
  server.handleClient();
}
