 
void setup()
{
Serial.begin(9600);
int a[5]={1,2,3,4,5};
for(int i=0;i<5;i++){
Serial.print(String(a[i])+" ");
}
Serial.println("");
for(int i=100;i<105;i++){
a[i-100]=i;
Serial.print(String(a[i-100])+" ");
}

}
void loop()
{
}
