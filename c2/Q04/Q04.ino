int red = 3;
int yellow = 4;
int green = 5;
int time0 = 5;

void setup() {
  for(int i=3;i<6;i++){
    pinMode(i, OUTPUT);
    digitalWrite(i, LOW);
  }
  


  

}

void loop() {
  for(float j=1;j<6000;j+=1.15){
      for(int k=3;k<6;k++){
      digitalWrite(k, HIGH);
      delay(time0*j);
      digitalWrite(k, LOW);
      delay(time0*j);

    }
  }
  

  
 

}
