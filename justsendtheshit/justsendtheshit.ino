#include <SoftwareSerial.h>
SoftwareSerial mySerial(10, 11); // RX, TX

int button = 12;
int buttonState = 0;
int lastButtonState = 0;

void setup() {
  Serial.begin(9600);
  mySerial.begin(9600);
  pinMode(button, INPUT);
}
 

void loop() {
  lastButtonState = buttonState;
  buttonState = digitalRead(button);
  if (buttonState == HIGH && lastButtonState == LOW) {
    mySerial.write('c');
    Serial.println("button push");
  }
//if (buttonState == LOW && lastButtonState == HIGH) {
//  mySerial.write('d');
//  Serial.println("button UNpush");
//}
}


//&& lastButtonState == HIGH


