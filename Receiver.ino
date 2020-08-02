#include <IRrecv.h> 
#include <IRremoteESP8266.h> 
// Define sensor pin 
const int RECV_PIN = 14; 
 
// Define IR Receiver and Results Objects 
IRrecv irrecv(RECV_PIN); 
decode_results results; 
 
void setup(){ 
  // Enable the IR Receiver 
  irrecv.enableIRIn(); 
  Serial.begin(9600); 
} 
 
void loop(){ 
  if (irrecv.decode(&results)){ 
    switch(results.value){ 
      case 0x20DF10EF:  
      Serial.print('A'); 
      break; 
 
      case 0x20DFB04F:  
      Serial.print('N'); 
      break; 
 
      case 0x20DF7A85:  
      Serial.print('K'); 
      break; 
       
      case 0x20DF9E61:  
      Serial.print('I'); 
      break; 
 
      case 0x20DF0FF0:  
      Serial.print('T'); 
      break; 
       
      case 0x20DFD02F:  
      Serial.print('R'); 
      break; 
 
      case 0x20DF8877:  
      Serial.print('J'); 
      break; 
 
      case 0x20DF48B7:  
      Serial.print('M'); 
      break; 
 
      case 0x20DFC837:  
      Serial.print('H'); 
      break; 
 
      case 0x20DF28D7:  
      Serial.print('P'); 
      break; 
 
      case 0x20DFA857:  
      Serial.print(' '); 
      break;    
    } 
    irrecv.resume();  
  } 
} 
