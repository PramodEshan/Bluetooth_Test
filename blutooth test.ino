#define LED 3
char incoming_value = 0;

void setup() {
  Serial.begin(9600);
  pinMode(LED, OUTPUT);

}

void loop() {
  if(Serial.available()>0){
    incoming_value = Serial.read();
    Serial.println(incoming_value);
    if(incoming_value == '1'){
      digitalWrite(LED, HIGH);
    }
    else{
      digitalWrite(LED, LOW);
    }
  }
}
