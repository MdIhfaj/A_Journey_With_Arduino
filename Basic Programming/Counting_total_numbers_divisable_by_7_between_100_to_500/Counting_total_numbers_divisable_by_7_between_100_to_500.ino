
void setup()
{
Serial.begin(9600);
  int i=100,target=500;
int count=0;
for(i=0;i<=target;i++)
{
if(i%7==0){Serial.println(i);count++;}
}
Serial.println("Total numbers: "+String(count));
}
void loop()
{

}

