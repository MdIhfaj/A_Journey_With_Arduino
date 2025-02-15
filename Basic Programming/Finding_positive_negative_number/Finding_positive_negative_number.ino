
void setup()
{
Serial.begin(9600);
}
void loop()
{
int a = -6;
if(a>0)Serial.print(String(a)+" is positive number");
else if (a<0)Serial.print(String(a)+" is negative number");
else Serial.print(String(a)+" is zero");
Serial.println("");
}

