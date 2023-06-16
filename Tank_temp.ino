
#define RelayPin 6
boolean flag = false;

void setup() 
{
 Serial.begin(9600);  // initialize digital pin LED_BUILTIN as an output.
 pinMode(RelayPin, OUTPUT);
}

// the loop function runs over and over again forever//
void loop()
{
  float sensorValue = analogRead(A2);
  Serial.println("value=");
  Serial.println(sensorValue);
  
  if ((sensorValue>916)&&(flag == false)) //if 200 is room temp
    {
      digitalWrite(RelayPin,LOW);
      flag == true;
    }
    else if ((flag == true))
    {
      digitalWrite(RelayPin,HIGH);
      flag == false;
    }
  delay(1000);
}
