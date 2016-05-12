/*
  Signal Generator

  Simple dual channel square wave signal generator for testing
  flow signal pulse inputs

 */

#include "SignalGenerator.h"

// Define global constants
#define _1SEC (1000000) // 1 second is 1000000 microseconds

// Define global variables


// System Initialisation
void setup() {                
  // Setup the pin status
  pinMode(CH1_PIN, OUTPUT);
  pinMode(CH2_PIN, OUTPUT);
  pinMode(LED_PIN, OUTPUT);
  
}

// the loop routine runs over and over again forever:
void loop() {
  
  // Generate hard coded pulses
  PULSE(FREQUENCY_1Hz, (FREQUENCY_1Hz/2),  digitalWrite(LED_PIN, HIGH), digitalWrite(LED_PIN, LOW) );
  PULSE(FREQUENCY_1Hz, (FREQUENCY_1Hz/2),  digitalWrite(CH1_PIN, HIGH), digitalWrite(CH1_PIN, LOW) );
  PULSE(FREQUENCY_1Hz, (FREQUENCY_1Hz/2),  digitalWrite(CH2_PIN, HIGH), digitalWrite(CH2_PIN, LOW) );
  
}
