#include <ESP8266WiFi.h>
#include <BlynkSimpleEsp8266.h>


char auth[] = "C8ylvGmgrq2z5AfHNVpQt6EQ9X9-FHZ-";    //Blynk authorization token

//WIFI Credentials
char ssid[] = "643 Ground";
char pass[] = "643block13";

int data;


void setup() {
  Serial.begin(9600);
  Blynk.begin(auth, ssid, pass);
}

void loop() {
  Blynk.run();
  Serial.print("State:  ");
  data = Serial.read();
  Serial.println(data);
  Blynk.virtualWrite(V5, data);
  delay (1000);
}






/*
BlynkTimer timer;

// This function sends Arduino's up time every second to Virtual Pin (5).
// In the app, Widget's reading frequency should be set to PUSH. This means
// that you define how often to send data to Blynk App.
void myTimerEvent()
{
  // You can send any value at any time.
  // Please don't send more that 10 values per second.
  Blynk.virtualWrite(V5, millis() / 1000);
}*/

/*void setup()
{
  timer.setInterval(1000L, myTimerEvent);
}*/

/*void loop()
{
  timer.run(); // Initiates BlynkTimer
}*/
