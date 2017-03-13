float sensorValue;
  float sensorVoltage;
  float R1=0;
  float R2=1114000;
  int Vin=5;
  int i;
 


void setup() 
{
 Serial.begin(9600);

}

void loop() 
{
  for (i=0;i<=5;i++)
    sensorValue = 0.7* sensorValue + 0.3* analogRead(A1);
  sensorVoltage = sensorValue * 5 / 1024;
  // sensorVoltage= Vin * R1 / (R1+R2)
  R1 = sensorVoltage * (R2) / Vin ;
  Serial.print(R1); Serial.print(",  ");
  Serial.print(sensorVoltage); Serial.print(",  ");
  Serial.println(sensorValue);
  delay(500);
}
