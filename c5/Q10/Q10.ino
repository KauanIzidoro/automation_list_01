int led = 4;
int bt1 = 6;
int bt2 =5;
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
  if(bt1state^bt2state){
    digitalWrite(led, HIGH);
    ledstate = true;
  }
  
  if(bt1state == HIGH && bt2state == HIGH){
  	digitalWrite(led, LOW);
  }
  if(bt1state==LOW && bt2state==LOW){
  	digitalWrite(led, LOW);
  }
  
  
  

}
