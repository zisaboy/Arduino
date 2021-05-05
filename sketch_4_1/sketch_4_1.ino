const byte LED =13;
const byte SW = 8;

void setup() {
  // put your setup code here, to run once:
  pinMode(LED,OUTPUT);
  pinMode(SW,INPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  bool val = digitalRead(SW);
  digitalWrite(LED,val);

}
