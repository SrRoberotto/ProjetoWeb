
#include <WiFi.h>
const char* ssid     = "********";
const char* password = "**********";
const char* host = "*********";
const int httpPort = 80;
float Sensor1 = 50;
String url;
unsigned long timeout;

void setup()
{
 
    Serial.begin(9600);
    delay(10);
    Serial.print("Conectando com  ");
    Serial.println(ssid);
    WiFi.begin(ssid, password);

    while (WiFi.status() != WL_CONNECTED) {
        delay(500);
        Serial.print(".");
    }

    Serial.println("");
    Serial.println("WiFi Conectado ");
    Serial.println(" Endereço de IP : ");
    Serial.println(WiFi.localIP());
}


void loop()
{
  /*=== Espaço para leitura dos sensores====*/
    Sensor1 = Sensor1+0.5;
  /*==========================================*/
    Serial.print("connecting to ");
    WiFiClient client;
    if (!client.connect(host, httpPort)) {
        Serial.println("Falha na Conexão");
        return;
    }

    url = "/webSite/Salvar.php?";
    url += "Sensor=";
    url +=  Sensor1;
    Serial.print("Requesting URL: ");
    Serial.println(url);
    client.print(String("GET ") + url + " HTTP/1.1\r\n" + "Host: " + host + "\r\n" + "Connection: close\r\n\r\n");
    timeout = millis();
    while (client.available() == 0) {
        if (millis() - timeout > 5000) {
            Serial.println(">>> Client Timeout !");
            client.stop();
            return;
        }
    }
    while(client.available()) {
        String line = client.readStringUntil('\r');
        Serial.print(line);
    }
    
    delay(5000);
}
