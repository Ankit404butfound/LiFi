#include <IRremote.h> 
IRsend irsend; 
 
void setup(){ 
  Serial.begin(9600); 
} 
 
void loop(){ 
  if (Serial.available()) { 
  int r = Serial.read(); 
    if (r == 'A'){ 
      irsend.sendNEC(0x20DF10EF, 32);  
      delay(40); 
    } 
    if (r == 'N'){ 
      irsend.sendNEC(0x20DFB04F, 32);  
      delay(40); 
    } 
    if (r == 'K'){ 
      irsend.sendNEC(0x20DF7A85, 32);  
      delay(40); 
    } 
    if (r == 'I'){ 
      irsend.sendNEC(0x20DF9E61, 32);  
      delay(40); 
    } 
    if (r == 'T'){ 
      irsend.sendNEC(0x20DF0FF0, 32);  
      delay(40); 
    } 
    if (r == 'R'){ 
      irsend.sendNEC(0x20DFD02F, 32);  
      delay(40); 
    } 
    if (r == 'J'){ 
      irsend.sendNEC(0x20DF8877, 32);  
      delay(40); 
    } 
    if (r == 'M'){ 
      irsend.sendNEC(0x20DF48B7, 32);  
      delay(40); 
    } 
    if (r == 'H'){ 
      irsend.sendNEC(0x20DFC837, 32);  
      delay(40); 
    } 
    if (r == 'P'){ 
      irsend.sendNEC(0x20DF28D7, 32);  
      delay(40); 
    } 
    if (r == ' '){ 
      irsend.sendNEC(0x20DFA857, 32);  
      delay(40); 
    } 
  } 
} 
