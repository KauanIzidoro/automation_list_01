#define snsmove 7
int led = 4;
int snsmov = 7;
int click = 0;


void setup() {
  pinMode(led, OUTPUT);
  pinMode(snsmov, INPUT);
}

void loop() {
  bool snsmovestate = digitalRead(snsmove);
  if(snsmovestate){
    for(int i=0; i<3;i++){
      digitalWrite(led, HIGH);
      delay(777);
      digitalWrite(led, LOW);
    }
  }
}

