

#include <IRremote.h>

int IR_Recv = 11;   //IR Receiver Pin 3

int greenPin = 13;

 #define SW1 6
IRrecv irrecv(IR_Recv);
decode_results results;
 
void setup(){
  Serial.begin(9600);  //starts serial communication
  irrecv.enableIRIn(); // Starts the receiver
  pinMode(greenPin, OUTPUT);      // sets the digital pin as output
 pinMode(SW1, OUTPUT);

 digitalWrite(SW1, HIGH); // Relay is active low, so HIGH will turn it off at startup

}
 
void loop(){
  //decodes the infrared input
  if (irrecv.decode(&results)){
    long int decCode = results.value;
    Serial.println(results.value);
    //switch case to use the selected remote control button
    switch (results.value){
      
        break;
       case your value: //when you press the 2 button
        digitalWrite(greenPin, HIGH);
  }
        break;           
       case your value: //when you press the 5 button
        digitalWrite(greenPin, LOW);
        break;       
    }
    irrecv.resume(); // Receives the next value from the button you press
  }
  delay(10);
}
