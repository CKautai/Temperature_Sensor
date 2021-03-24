
// This #include statement was automatically added by the Particle IDE.
#include <Adafruit_DHT.h>

#define DHTPIN  6
#define DHTTYPE  DHT11

DHT dht(DHTPIN, DHTTYPE);
void setup() {

}

void loop() {
    
    
    // Read temperature as Celsius
    float t = dht.getTempCelcius();

    //Converts tempertature to string and publishes it;
    Particle.publish("temp", String (t), PRIVATE);            // Wait for 30 seconds
    
    delay(30000);               // Wait for 30 seconds
}