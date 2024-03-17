#include "DHT.h" // initiate dht sensor library
#define DHTPIN D1 // Define the data pin on NodeMCU that's connected to the sensor
#define DHTTYPE DHT11 // Define the type of the dht sensor
DHT dht(DHTPIN, DHTTYPE); // Instantiate a DHT object with the type and pin defined earlier

void setup(){
  Serial.begin(9600); //Sets the data rate in bits per second (baud) for serial data transmission.
  dht.begin(); // initialize the DHT sensor
}
void loop()
{ 
  // declare the variable for the sensor reading
  float humi = dht.readHumidity(); 
  float temp = dht.readTemperature();
  float tempF = (temp*9/5) + 32;

  //print the reading
  Serial.print("Humidity: ");
  Serial.print(humi);
  Serial.println("%");
  Serial.print("Temperature: ");
  Serial.print(temp);
  Serial.print("°C // ");
  Serial.print(tempF);
  Serial.println("°F");
  delay(2000);
}
