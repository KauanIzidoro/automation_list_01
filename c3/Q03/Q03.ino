  int led_a = 3;
  int led_b = 4;
  int led_c = 5;
  int led_d = 6;
  int led_e = 7;
  int led_f = 8;
  int led_g = 9;
  int bt = 2;
  int time = 555;
  int number0();
  int number1();
  int number2();
  int number3();
  int number4();
  int number5();
  int number6();
  int number7();
  int number8();
  int number9();

  void setup() {
    pinMode(bt, INPUT);
    for(int i=3;i<10;i++){
      pinMode(i,OUTPUT);
    }
    for(int j=3;j<10;j++){
      digitalWrite(j,LOW);
    }

  }

  void loop() {
    if(digitalRead(bt)==1){
      number0(1);
      delay(time);
      number0(0);
      delay(time);
      number1(1);
      delay(time);
      number1(0);
      delay(time);
      number2(1);
      delay(time);
      number2(0);
      delay(time);
      number3(1);
      delay(time);
      number3(0);
      delay(time);
      number4(1);
      delay(time);
      number4(0);
      delay(time);
      number5(1);
      delay(time);
      number5(0);
      delay(time);
      number6(1);
      delay(time);
      number6(0);
      delay(time);
      number7(1);
      delay(time);
      number7(0);
      delay(time);
      number8(1);
      delay(time);
      number8(0);
      delay(time);
      number9(1);
      delay(time);
      number9(0);
      delay(time);
      number8(1);
      delay(time);
      number8(0);
      delay(time);
      number7(1);
      delay(time);
      number7(0);
      delay(time);
      number6(1);
      delay(time);
      number6(0);
      delay(time);
      number5(1);
      delay(time);
      number5(0);
      delay(time);
      number4(1);
      delay(time);
      number4(0);
      delay(time);
      number3(1);
      delay(time);
      number3(0);
      delay(time);
      number2(1);
      delay(time);
      number2(0);
      delay(time);
      number1(1);
      delay(time);
      number1(0);
      delay(time);
      number0(1);
      delay(time);
      number0(0);
      
    }
  }

  int number0(int state){
    for(int k=3;k<9;k++){
      digitalWrite(k, state);
    }
  }
  int number1(int state){
    digitalWrite(led_b, state);
    digitalWrite(led_c, state);
  }
  int number2(int state){
    digitalWrite(led_a, state);
    digitalWrite(led_b, state);
    digitalWrite(led_g, state);
    digitalWrite(led_e, state);
    digitalWrite(led_d, state);
  }
  int number3(int state){
    for(int l=3;l<7;l++){
      digitalWrite(l, state);
    }
    digitalWrite(led_g, state);
  }
  int number4(int state){
    digitalWrite(led_b, state);
    digitalWrite(led_g, state);
    digitalWrite(led_c, state);
    digitalWrite(led_f, state);
  }
  int number5(int state){
    digitalWrite(led_a, state);
    digitalWrite(led_f, state);
    digitalWrite(led_g, state);
    digitalWrite(led_c, state);
    digitalWrite(led_d, state);
  }
  int number6(int state){
    for(int n=5;n<10; n++){
      digitalWrite(n, state);
    }
    digitalWrite(led_a, state);
  }
  int number7(int state){
    for(int m=3;m<6; m++){
      digitalWrite(m, state);
    }
  }
  int number8(int state){
    for(int p=3;p<10;p++){
      digitalWrite(p, state);
    }
  }
  int number9(int state){
    for(int x=3;x<6; x++){
      digitalWrite(x, state);
    }
    digitalWrite(led_f, state);
    digitalWrite(led_g, state);
  }