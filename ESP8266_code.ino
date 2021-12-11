

void setup() {
// Open serial communications and wait for port to open:
Serial.begin(9600);
while (!Serial) {
; // wait for serial port to connect. Needed for native USB port only
}
}
void loop() { // run over and over
if (Serial.available()) {
Serial.write(Serial.read());
}
}

//#include<ESP8266WiFi.h> 
//
//const char* ssid = "WallGames"; //your WiFi Name
//const char* password = "079008501t";  //Your Wifi Password
//int ledPin = 03; 
//WiFiServer server(80);
//void setup() {
//  Serial.begin(9600);
//  delay(10); 
//  pinMode(ledPin, OUTPUT);
//  digitalWrite(ledPin, LOW); 
//  Serial.println();
//  Serial.println();
//  Serial.print("Connecting to ");
//  Serial.println(ssid); 
//  WiFi.begin(ssid, password);
//  while (WiFi.status() != WL_CONNECTED) {
//    delay(500);
//    Serial.print(".");
//  }
//  Serial.println("");
//  Serial.println("WiFi connected"); 
//  server.begin();
//  Serial.println("Server started");
//  Serial.print("Use this URL to connect: ");
//  Serial.print("http://");
//  Serial.print(WiFi.localIP());
//  Serial.println("/"); 
//}
//
//
//void loop() {
//    if (Serial.available()){
//    Serial.write(Serial.read());
//    }
//  WiFiClient client = server.available();
//  if (!client) {
//    return;
//  }
//  Serial.println("new client");
//  while(!client.available()){
//    delay(1);
//  } 
//
//
//  //if (Serial.available()) {
////Serial.write(Serial.read());
//
//  client.println("HTTP/1.1 200 OK");
//  client.println("Content-Type: text/html");
//  client.println(""); 
//  client.println("");
//  client.println("");
//  
//  client.print("\nMessage is : \n\n"); 
//
//
//
//
//    // Close the connection
//    client.stop();
//    Serial.println("Client disconnected.");
//    Serial.println("");
//  
//}
