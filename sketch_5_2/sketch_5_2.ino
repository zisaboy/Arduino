char val;

void setup() {
  // put your setup code here, to run once:
  pinMode(LED_BUILTIN, OUTPUT);
  Serial.begin(9600);

  Serial.print("Welcome to Arduino!");
}

void loop() {
  // put your main code here, to run repeatedly:
  if(Serial.available())
  {
    val = Serial.read();
    if( val == '1')
    {
      digitalWrite(LED_BUILTIN, HIGH);
      Serial.println("LED ON");
    }
    else if (val == '0')
    {
      digitalWrite(LED_BUILTIN, LOW);
      Serial.println("LED OFF");
    }
  }

}
