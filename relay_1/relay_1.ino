#define RELAY_PIN 3;
#define BUTTON_PIN 2;

void setup() {
  pinMode(RELAY_PIN, OUTPUT);
  pinMode(BUTTON_PIN, INPUT)

}

void update() {
  digitalWrite(RELAY_PIN, HIGH)
  delay(3000);
  digitalWrite(RELAY_PIN, LOW)
  
}

void loop() {
  if digitalRead(BUTTON_PIN){
    update();
    
  }
  
}
