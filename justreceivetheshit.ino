#include <SoftwareSerial.h>
SoftwareSerial mySerial(10, 11); // RX, TX

char receivedSerial;

void setup() 
{
  Serial.begin(9600);
  mySerial.begin(9600);

}


void loop() 
{

mySerial.listen();

   if(mySerial.available())
    { 
      char c = mySerial.read();
      Serial.println("serial received!");
      delay(500);
    }
//    else
//    {
//      Serial.println("nah");
//      delay(500);
//    }
//  
  }//endloop
