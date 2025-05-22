int sensor = A7;
int buzzer = 4;

void setup() {
  // put your setup code here, to run once:
  pinMode(sensor, INPUT);
  pinMode(buzzer, OUTPUT);
  digitalWrite(buzzer, LOW);
  Serial.begin(9600);
}
int x;
void loop() {
  x = analogRead(sensor);
  Serial.println(x);
  delay(250);
  if(x <= 50){
    activateBuzzer();
  }
  else{
    digitalWrite(buzzer, LOW);
  }
  // put your main code here, to run repeatedly:

}

void activateBuzzer(){
  digitalWrite(buzzer, HIGH);
  delay(250);
  digitalWrite(buzzer, LOW);
  delay(250);
}