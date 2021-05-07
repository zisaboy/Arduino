//使用F()避免字串占用主記憶體 EX:輸出大量固定不變的文字內容
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  //Serial.println("Hello");
  Serial.println(F("Hello"));
}

void loop() {
  // put your main code here, to run repeatedly:
}
