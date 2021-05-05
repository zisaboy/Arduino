//消除機械開關彈跳 bouncing

const byte LED =13;
const byte SW = 2;
bool lastState = LOW;
bool toggle = LOW;

void setup() {
  // put your setup code here, to run once:
  pinMode(LED,OUTPUT);
  pinMode(SW,INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  bool b1 = digitalRead(SW);
  if(b1)
  {
    delay(20);
    bool b2 = digitalRead(SW);

    if(b1 == b2)
    {
      lastState = b1;
    }
  }

  if(b1 != lastState)
  {
    toggle = !toggle;
    digitalWrite(LED,toggle);
    lastState = LOW;
  }
}
