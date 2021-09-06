
//Take a buffer so that you can store your sample in the buffer
int analogBuffer[500];

void setup() 
{
  Serial.begin(9600);
}

void loop() 
{
  //First save the sample in a buffer using loop. 
  for(int i = 0; i<500; i++)
  {
    analogBuffer[i] = analogRead(A0);
  }
  //After taking sample do whatever you want to do with the sample
  //Print or postprocess anything
  for( int i = 0 ; i<500; i++)
  {
    Serial.println(analogBuffer[i]);
  }
//  int sensorValue = analogRead(A0);
//  Serial.println(sensorValue);
}
