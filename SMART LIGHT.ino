//https://www.youtube.com/watch?v=Tk1Cme4VNiE
//https://www.youtube.com/watch?v=5jeaIfJI6NM

const int sensorPin = A7;
const int lightPin = 2;

int lowThreshold = 500;
int highThreshold = 600;


void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(lightPin, OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
int sensorValue = analogRead(sensorPin);

if (sensorValue < lowThreshold){
  digitalWrite(lightPin,HIGH);
  analogWrite(lightPin,255);//BOOST LIGHT UP
}

if (sensorValue > lowThreshold){
  digitalWrite(lightPin,LOW);
    analogWrite(lightPin,0);//LIGHTS OFF

}
}
