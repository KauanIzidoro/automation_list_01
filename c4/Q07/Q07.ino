int led = 4;
int bt1 = 6;
int click = 0;
unsigned long temp;

void setup() {
  pinMode(led, OUTPUT);
  pinMode(bt1, INPUT);
  digitalWrite(led, LOW);
}

void loop() {
  bool bt1state = digitalRead(bt1);
  if (bt1state) {
    click = click + 1;
    delay(400);
    for (int i = 0; i < click; i++) {
      digitalWrite(led, HIGH);
      delay(500);
      digitalWrite(led, LOW);
      delay(500);
    }
  }
  
 
}
