
const int opticalSwitch = 6;

void setup() {
  pinMode(opticalSwitch,INPUT); 
  Serial.begin(9600);
  // hello 
  //let us try to go back from this line 


  //made from commentLine
 
}

void loop() {
  Serial.println(digitalRead(opticalSwitch));
}
