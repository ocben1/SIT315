const int LED = 13; //LED light
const int PIR = 2; //PIR Motion detector

int sensorState = LOW; //initialize sensorState to off

void setup()
{
  pinMode(PIR, INPUT);
  pinMode(LED, OUTPUT);
  
  //we use rising mode as sensorState initialized as LOW
  attachInterrupt(digitalPinToInterrupt(PIR), sensorToggle, RISING);
  Serial.begin(9600);
}

void loop()
{
 //do nothing 
}
//Interrupt Service Routine
void sensorToggle()
{
  sensorState = !sensorState;
  digitalWrite(LED, sensorState);
  Serial.println("Motion detected! You interrupted me!");
}