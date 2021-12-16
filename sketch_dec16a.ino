int G=13;
int B=11;
int R=12;

void setup() {
  // put your setup code here, to run once:
  for(int i = 11;i<14;i++){
    pinMode(i,OUTPUT);
  }
}

void loop() {
  int i = 0;
  for(i=0;i<255;i++){
    analogWrite(R,i);
    delay(5);
  }
  for(i;i>=0;i--){
    analogWrite(R,i);
    delay(5);
  }
  
  for(i;i<255;i++){
    analogWrite(G,i);
    delay(5);
  }
  for(i;i>=0;i--){
    analogWrite(G,i);
    delay(5);
  }
  
  for(i;i<255;i++){
    analogWrite(B,i);
    delay(5);
  }
  for(i;i>=0;i--){
    analogWrite(B,i);
    delay(5);
  }
    
  delay(100);
  
  
  // put your main code here, to run repeatedly:

}
