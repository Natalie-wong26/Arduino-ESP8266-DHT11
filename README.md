# Temperature & Humidity Sensor
You can view my code in TP2_IoT.ino 

## Preparation
Download Arduino IDE here: https://www.arduino.cc/en/software
Material: NodeMCU ESP-8266, DHT-11 Sensor, USB A to Micro USB cable data

## Steps
1. Connect the NodeMCU with the DHT Sensor with the jumper cable. With the schema below:

      |NodeMCU   |DHT 11    |
      |----------|----------|
      |3V        |+         |
      |D1 - D8*  |Out       |
      |G         |-         |
   
   Note: *Choose one data pin from D1 - D8. I use D1 for this demonstration purpose.
   
   ![Step 1](https://github.com/Natalie-wong26/Arduino-ESP8266-DHT11/raw/master/Images/Step%201.jpg)
   
2. Connect the NodeMCU board to your PC with Type A to Micro USB cable data. Then Open your Arduino IDE.
   
   ![Step 2](https://github.com/Natalie-wong26/Arduino-ESP8266-DHT11/raw/master/Images/Step%202.png)
   
3. Install the board manager for ESP8266.
   if there isn't any in the Board Manager menu, Download the board manager first by adding this URL (http://arduino.esp8266.com/stable/package_esp8266com_index.json) to the "Additional Boards Manager" field in File > Preferences menu.
   Note: if there is more than one url, use comma in between.
   
   ![Step 3-1](https://github.com/Natalie-wong26/Arduino-ESP8266-DHT11/raw/master/Images/Step%203-1.png)
   
   ![Step 3-2](https://github.com/Natalie-wong26/Arduino-ESP8266-DHT11/raw/master/Images/Step%203-2.png)

4. Install the DHT sensor library

   ![Step 4-1](https://github.com/Natalie-wong26/Arduino-ESP8266-DHT11/raw/master/Images/Step%204-1.png)

   Click "Install All"
   
   ![Step 4-2](https://github.com/Natalie-wong26/Arduino-ESP8266-DHT11/raw/master/Images/Step%204-2.png)
   
5. Config the board and port by going to this menu Tools > Board / Port
   
   ![Step 5-1](https://github.com/Natalie-wong26/Arduino-ESP8266-DHT11/raw/master/Images/Step%205-1.png)
   
   These are my configuration:
   
   ![Step 5-2](https://github.com/Natalie-wong26/Arduino-ESP8266-DHT11/raw/master/Images/Step%205-2.png)
   
   Note: Make sure to choose the port that's shows on device manager. If the board is not detected, you should install [CH340 driver](https://sparks.gogo.co.nz/ch340.html) first.
   
6. Write the code and upload the code to the board (--> at the top left)

   ![Step 6](https://github.com/Natalie-wong26/Arduino-ESP8266-DHT11/raw/master/Images/Step%206.png)

7. The output is shown in the "Serial Monitor" windows. Be sure to choose the same baud rate as define in your code (in my case it's 9600)

   ![Step 7](https://github.com/Natalie-wong26/Arduino-ESP8266-DHT11/raw/master/Images/Step%207.png)

8. Done
 
   ![Step 8](https://github.com/Natalie-wong26/Arduino-ESP8266-DHT11/raw/master/Images/Step%208.jpg)
