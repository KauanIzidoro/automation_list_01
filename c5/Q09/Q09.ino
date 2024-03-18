int bt1 = 6;
int bt2 = 5;
int led = 4;
int bt1state = 0;
int bt2state = 0;
bool ledstate = false;

void setup() {
  pinMode(bt1, INPUT);
  pinMode(bt2, INPUT);
  pinMode(led, OUTPUT);
  digitalWrite(led, LOW);
}

void loop() {
  bt1state = digitalRead(bt1);
  bt2state = digitalRead(bt2);
  if (bt1state == HIGH && bt2state == HIGH) {
    ledfunction();
  }else{
    if (bt1state == HIGH) {
      digitalWrite(led, HIGH);
      ledstate = true;
    }else if(bt2state == HIGH) {
      digitalWrite(led, LOW);
      ledstate = false;
    }
  
  
  }
}

void ledfunction() {
  digitalWrite(led, !digitalRead(led));
  delay(555);
}
