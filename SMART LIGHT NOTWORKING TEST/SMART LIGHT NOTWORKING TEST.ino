int sensorPin = A7;
int lightPin = D2;

int lowThreshold = 500;
int highThreshold = 600;


void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);

}

void loop() {
  // put your main code here, to run repeatedly:
int sensorValue = analogRead(sensorPin);

if (sensorValue < lowThreshold){
  digitalWrite(lightPin,HIGH);
}

if (sensorValue > lowThreshold){
  digitalWrite(lightPin,LOW);
}
}