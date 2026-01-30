#include <ESP8266WiFi.h>
#include <WiFiClient.h>
#include <ESP8266WebServer.h>
const char* ssid = "Lowser";
ESP8266WebServer server(80);
String command;
void HTTP_handleRoot(void);

void setup()
{
  Serial.begin(115200);
  // Connecting WiFi
  WiFi.mode(WIFI_AP);
  WiFi.softAP(ssid);
  IPAddress myIP = WiFi.softAPIP();
  Serial.print("AP IP address: ");
  Serial.println(myIP);
  // Starting WEB-server
  server.on ( "/", HTTP_handleRoot );
  server.onNotFound ( HTTP_handleRoot );
  server.begin();

}

void loop()
{
  server.handleClient();
  command = server.arg("State");
  if (command == "F") Serial.println("F");
  else if (command == "B") Serial.println("B");
  else if (command == "L") Serial.println("L");
  else if (command == "R") Serial.println("R");
  else if (command == "I") Serial.println("I");
  else if (command == "G") Serial.println("G");
  else if (command == "J") Serial.println("J");
  else if (command == "H") Serial.println("H");
  else if (command == "0") Serial.println("0");
  else if (command == "1") Serial.println("1");
  else if (command == "2") Serial.println("2");
  else if (command == "3") Serial.println("3");
  else if (command == "4") Serial.println("4");
  else if (command == "5") Serial.println("5");
  else if (command == "6") Serial.println("6");
  else if (command == "7") Serial.println("7");
  else if (command == "8") Serial.println("8");
  else if (command == "9") Serial.println("9");
  else if (command == "S") Serial.println("S");
}

void HTTP_handleRoot(void)
{
  if ( server.hasArg("State") )
  {
    Serial.println(server.arg("State"));
  }
  server.send ( 200, "text/html", "" );
  delay(1);
}
