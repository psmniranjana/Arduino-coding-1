int LED=13;
int counter=0;
void setup() {
  // put your setup code here, to run once:
  pinMode(LED,OUTPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  counter++;
  Serial.print("Blink number # ");
  Serial.println(counter);

  digitalWrite(13,HIGH);
  delay(1000);
  digitalWrite(13,LOW);
  delay(500);
}
