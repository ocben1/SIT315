const int LED = 13; //LED light
const int PIR = 2; //PIR Motion detector

int sensorState = LOW; //initialize sensorState to off

void setup()
{
  pinMode(PIR, INPUT);
  pinMode(LED, OUTPUT);
  Serial.begin(9600);
}

void loop()
{
  //read state of PIR input
  sensorState = digitalRead(2);
  //if sensor pin is HIGH (motion detected?)
  if (sensorState == HIGH) {
  digitalWrite(13, HIGH);
  Serial.println("Motion detected!");
  } else {
  	digitalWrite(13, LOW);
    Serial.println("Nothing.");
  }
  delay(1000); //improves simulation performance by not spamming the serial monitor
}