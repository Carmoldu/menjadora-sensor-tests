int FSRanalogPin=0;
int FSRreading;

void setup(void){
  Serial.begin(9600);
}

void loop(void){
  FSRreading=analogRead(FSRanalogPin);
  Serial.println(FSRreading);
  delay(500);
}
