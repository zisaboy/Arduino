const byte dataPin = 2;
const byte latchPin = 3;
const byte clockPin = 4;

byte index = 0;
const byte LEDs[10] = 
{
  B1111110,
  B0110000,
  B1101101,
  B1111001,
  B0110011,
  B1011011,
  B1011111,
  B1110000,
  B1111111,
  B1111011, 
};

void setup() {
  // put your setup code here, to run once:
  pinMode(dataPin,OUTPUT);
  pinMode(latchPin,OUTPUT);
  pinMode(clockPin,OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(latchPin,LOW);
  shiftOut(dataPin,clockPin,LSBFIRST,LEDs[index]);
  digitalWrite(latchPin,HIGH);
  delay(1000);

  index++;
  if(index == 10)
  {
    index = 0;
  }
}
