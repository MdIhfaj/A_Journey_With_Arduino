void setup() {
  Serial.begin(9600);
}

void loop() {
  
if(Serial.available()>0)
{
  int y = Serial.parseInt();

  if(y%4==0 && y%100!=0) Serial.println(String(y) +" is the Leap Year");
  
  else if(y%400==0) Serial.println(String(y) +" is the Leap Year");
 
    else Serial.println(String(y) +" is not the Leap Year");
    delay(1000);
  }
}

