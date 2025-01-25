void setup() {
  Serial.begin(9600);


}

void loop() {
  // put your main code here, to run repeatedly:
int a;
  a=Serial.parseInt();
Serial.println(a);
}

