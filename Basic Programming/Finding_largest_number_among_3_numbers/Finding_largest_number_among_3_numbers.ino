void setup() {
  Serial.begin(9600);
int n1 = 1364,n2 = 201,n3 = 2673;

  if(n1>n2&&n1>n3) Serial.println(String(n1) +" is the largest");
  else if(n2>n1&&n2>n3) Serial.println(String(n2) +" is the largest");
    else Serial.println(String(n3) +" is the largest");
    delay(1000);

}

void loop() {


}

