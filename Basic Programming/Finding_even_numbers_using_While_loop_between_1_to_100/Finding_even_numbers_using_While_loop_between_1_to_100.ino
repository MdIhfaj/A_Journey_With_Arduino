
void setup()
{
Serial.begin(9600);
 
}
void loop()
{ int i=1;
while(i<=100){
if(i%2==0)Serial.println(i);
i++;
}
 while(1);
}



