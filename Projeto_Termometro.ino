const int LM35 = 0;
float temperatura = 0;
int ADCLido = 0;
const int Buzzer = 12;
const int LED[] = {
  2,3,4,5,6,7,8,9,10,11 };

void setup() {
  analogReference(INTERNAL);
  pinMode(Buzzer, OUTPUT);
  for(int x = 0; x < 10;  x++) {
    pinMode(LED[x], OUTPUT);  
  }
}

void loop() {
  ADCLido = analogRead(LM35);
  temperatura = ADCLido * 0.1075268817204301;
  if(temperatura > 28.50){
        digitalWrite(LED[0], HIGH);
      }
      else{
        digitalWrite(LED[0], LOW);
      }
      if(temperatura > 29.00){
        digitalWrite(LED[1], HIGH);
      }
      else{
        digitalWrite(LED[1], LOW);
      }
      if(temperatura > 29.50){
        digitalWrite(LED[2], HIGH);
      }
      else{
        digitalWrite(LED[2], LOW);
      }
      if(temperatura > 30.00){
        digitalWrite(LED[3], HIGH);
      }
      else{
        digitalWrite(LED[3], LOW);
      }
      if(temperatura > 30.50){
        digitalWrite(LED[4], HIGH);
      }
      else{
        digitalWrite(LED[4], LOW);
      }
      if(temperatura > 31.00){
        digitalWrite(LED[5], HIGH);
      }
      else{
        digitalWrite(LED[5], LOW);
      }
      if(temperatura > 31.50){
        digitalWrite(LED[6], HIGH);
      }
      else{
        digitalWrite(LED[6], LOW);
      }
      if(temperatura > 32.00){
        digitalWrite(LED[7], HIGH);
      }
      else{
        digitalWrite(LED[7], LOW);
      }
      if(temperatura > 32.50){
        digitalWrite(LED[8], HIGH);
      }
      else{
        digitalWrite(LED[8], LOW);
      }
      if(temperatura > 34.00){
        digitalWrite(LED[9], HIGH);
        tone(Buzzer, 2000);
      }
      else{
        digitalWrite(LED[9], LOW);
        noTone(Buzzer);
      }

}
