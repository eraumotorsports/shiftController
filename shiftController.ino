  /*
    Button
   
   Turns on and off relays connected to digital  
   pin 42 &43, when pressing a pushbutton attached to pin 2. 
   
   
   The circuit:
   * relays attached from pin 42&43 to ground 
   * pushbutton attached to pin 2 from +5V
   * 10K resistor attached to pin 40 & 41 from ground
   
   */
  

  
  // constants won't change. They're used here to 
  // set pin numbers:
  const int buttonPin = 40;     // the number of the pushbutton pin
  const int solPin =  42;      // the number of the LED pin
  const int buttonPin2 = 41;     // the number of the pushbutton pin
  const int solPin2 =  43;
  const int ignition = 22;
  float del = 1000; //this is the amount of delay in ms
  // variables will change:
  int buttonState = 0;         // variable for reading the pushbutton status
  int buttonState2 = 0;
  void setup() {
        
    // initialize the solenoid pin as an output:
    pinMode(solPin, OUTPUT);      
    pinMode(solPin2, OUTPUT);
    pinMode(ignition, OUTPUT);
    // initialize the pushbutton pin as an input:
    pinMode(buttonPin, INPUT);  
    pinMode(buttonPin2, INPUT);
  }
  
  void loop(){
    
    
    // read the state of the pushbutton value:
    buttonState = digitalRead(buttonPin);
    buttonState2 = digitalRead(buttonPin2);
  
    // check if the pushbutton is pressed.
    // if it is, the buttonState is HIGH:
    if (buttonState == HIGH) {     
      // turn solenoid on:    
      digitalWrite(solPin, LOW); 
      digitalWrite(ignition, LOW); 
    delay(del); //delay for 100 ms
    } 
    else {
      // turn solenoid off:
      digitalWrite(solPin, HIGH); 
      digitalWrite(ignition, HIGH);
    }
    
    if (buttonState2 == HIGH) {     
      // turn solenoid on:    
      digitalWrite(solPin2, LOW); 
      digitalWrite(ignition, LOW); 
    delay(del); //delay for 100 ms
    } 
    else {
      // turn solenoid off:
      digitalWrite(solPin2, HIGH); 
      digitalWrite(ignition, HIGH);
    }
  }
