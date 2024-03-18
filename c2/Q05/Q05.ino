int red = 3;
int yellow = 4;
int green = 5;
float time0 = 5000;

void setup() {
  for(int i=3;i<6;i++){
    pinMode(i, OUTPUT);
    digitalWrite(i, LOW);
  }
  


  

}

void loop() {
  for(float j=time0;j>6;j=j*(1-0.20)){
      for(int k=3;k<6;k++){
      digitalWrite(k, HIGH);
      delay(j);
      digitalWrite(k, LOW);
   
      

    }
  }
  

  
 

}

