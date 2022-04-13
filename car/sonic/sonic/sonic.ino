const int triggerPin = 6; // Trigger Pin of Ultrasonic Sensor
const int echoPin = 7; // Echo Pin of Ultrasonic Sensor
//const int ledPin = 9;
long duration = 0, cm = 0;

void setup() {
  Serial.begin(9600); // Starting Serial Terminal
}

void loop() {
  pinMode(triggerPin, OUTPUT);
  pinMode(echoPin, INPUT);
  //pinMode(ledPin, OUTPUT);

  //digitalWrite(ledPin, LOW);

  digitalWrite(triggerPin, LOW);
  delayMicroseconds(5);

  digitalWrite(triggerPin, HIGH);
  delayMicroseconds(40);
  digitalWrite(triggerPin, LOW);
  
  duration = pulseIn(echoPin, HIGH);
  cm = (duration * 17) / 1000 ;
  Serial.print(cm);
  Serial.print("cm");
  Serial.println();
  //if (cm<70){
  //  Serial.println("ledPin on");
  //  digitalWrite(ledPin, HIGH);
  // }
  delay(100);
}
