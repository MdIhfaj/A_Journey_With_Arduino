void setup() {
  Serial.begin(9600);
int number1 = 134,number2 = 201;

  if(number1>number2) Serial.println(String(number1) +" is the largest");
  else  Serial.println(String(number2) +" is the largest");
    delay(1000);

}

void loop() {


}

