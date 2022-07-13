int relay=8;
int trigPin = 2;
int echoPin=7;
int pingtraveltime;


void setup() {
  pinMode(trigPin,OUTPUT);
  pinMode(echoPin,INPUT);
 Serial.begin(9600);
}

void loop() {
digitalWrite(trigPin,LOW);
delayMicroseconds(10);
digitalWrite(trigPin,HIGH);
delayMicroseconds(10);
digitalWrite(trigPin,LOW);
pingtraveltime= pulseIn(echoPin,HIGH);
delay(25);
Serial.println(pingtraveltime);
delay(100);

if ( pingtraveltime<250){
  digitalWrite(relay,HIGH);
  delay(2000);

}
else{
 digitalWrite(relay,LOW);
}

}
