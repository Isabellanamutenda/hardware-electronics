
// define pins numbers
int trigPin =2;
int echoPin=3;
// defines variables
long duration;
int distance;
void setup() {
  pinMode (trigPin, OUTPUT); //sets the trigPin as an Output
  pinMode (echoPin, INPUT); //sets the echoPin as an Input
  Serial.begin(9600); // starts the serial communication
}
void loop(){
  //clears the trigPin
  digitalWrite (trigPin, LOW);
  delayMicroseconds (2);
  //sets the trigPin on HIGH states for 10 microseconds
  digitalWrite(trigPin, HIGH);
  delayMicroseconds (10);
  digitalWrite (trigPin ,LOW);
  // Reads the echoPin, returns the sound wave travel time in microseconds
  duration=pulseIn(echoPin,HIGH);
  //calculating the distance                                                                                                                                                                                                                                                         n=duration*1.5/2;
  distance=duration*1.482/2;
  // prints the distance on the serial Monitor
  Serial.print("Distance:sea water");
  Serial.print("Distance:fresh water");
  Serial.println(distance);
  Serial.println(distance);
  delay(1000); 
}
