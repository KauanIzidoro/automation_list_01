int red = 3;
int yellow = 4;
int green = 5;
int bt = 6;
int click = 0;

void setup() {
  for(int i=3;i<6;i++){
    pinMode(i, OUTPUT);
  }
  pinMode(bt, INPUT);
}

void loop() {
  if (digitalRead(bt) == HIGH) { 
    delay(44);
    if (digitalRead(bt) == HIGH) { 
      click++;
      delay(111);
      if (click == 1) {
        oneclick(1);
      } else if (click == 2) {
        twoclick(1);
      } else if (click == 3) {
        threeclick(1);
      }
    }
  }
}

void oneclick(int state) {
  digitalWrite(red, state);
  digitalWrite(yellow, LOW);
  digitalWrite(green, LOW);
}

void twoclick(int state) {
  digitalWrite(red, LOW);
  digitalWrite(yellow, state);
  digitalWrite(green, LOW);
}

void threeclick(int state) {
  digitalWrite(red, LOW);
  digitalWrite(yellow, LOW);
  digitalWrite(green, state);
}
