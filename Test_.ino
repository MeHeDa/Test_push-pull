
const int opticalSwitch = 6;

void setup() {
  pinMode(opticalSwitch,INPUT); 
  Serial.begin(9600);
}

void loop() {
  Serial.println(digitalRead(opticalSwitch));
}
