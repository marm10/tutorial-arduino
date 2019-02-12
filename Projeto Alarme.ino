const int LM35 = 0;
float temperatura = 0;
int ADCLido = 0;
const int Buzzer = 12;

void setup() {
  //Serial.begin(9600);
  analogReference(INTERNAL);
  pinMode(Buzzer, OUTPUT);
}

void loop() {
  ADCLido = analogRead(LM35);
  temperatura = ADCLido * 0.1075268817;
  if(temperatura > 33){ // setei como 25ºC
      delay(1000);
          ADCLido = analogRead(LM35);
      temperatura = ADCLido * 0.1075268817204301; //no Leonardo use 0.4887585532
      if(temperatura > 33){
        tone(Buzzer, 2000);
      }
  }
  else{
    noTone(Buzzer);
  }
}
