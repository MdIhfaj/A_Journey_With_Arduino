void setup() {
  Serial.begin(9600);


}

void loop() {
  if(Serial.available()>0){
  // put your main code here, to run repeatedly:
char a=Serial.read();

  delay(1000);
  if(a=='r') Serial.println("Today is rainy day");
  else Serial.println("Today is sunny day");
  }
}

