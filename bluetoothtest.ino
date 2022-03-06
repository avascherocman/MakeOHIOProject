#include <SoftwareSerial.h>
SoftwareSerial BTserial(2,3); // RX | TX
 
const long baudRate = 38400; 
char c='h';
boolean NL = true;
 
void setup() 
{
    Serial.begin(9600);
    Serial.print("Sketch:   ");   Serial.println(__FILE__);
    Serial.print("Uploaded: ");   Serial.println(__DATE__);
    Serial.println(" ");
 
    BTserial.begin(baudRate);  
    Serial.print("BTserial started at "); Serial.println(baudRate);
    Serial.println(" ");
}
 
void loop()
{
  c = 'u';
  Serial.write(c);
  BTserial.write('y');
 
    // Read from the Bluetooth module and send to the Arduino Serial Monitor
    if (true)
    {
        c = 'i';
        Serial.write(c);
    }
 
 
    // Read from the Serial Monitor and send to the Bluetooth module
    if (true)
    {
        c = 'j';
        BTserial.write(c);   
 
        // Echo the user input to the main window. The ">" character indicates the user entered text.
        if (NL) { Serial.print(">");  NL = false; }
        Serial.write(c);
        if (c==10) { NL = true; }
    }
 
}
