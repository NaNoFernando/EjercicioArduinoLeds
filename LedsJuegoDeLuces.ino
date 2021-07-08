void setup() {
pinMode(2,OUTPUT);
pinMode(3,OUTPUT);
pinMode(4,OUTPUT);
pinMode(5,OUTPUT);
pinMode(6,OUTPUT);
pinMode(7,OUTPUT);
pinMode(8,OUTPUT);
pinMode(9,OUTPUT);
Serial.begin(9600);

}

void loop() {
if(Serial.available())
{
  char x=Serial.read();
  if(x=='1')
  {
    Serial.println("Secuencia 1");
      sec1();
  }
  if(x=='2'){
    Serial.println("Secuencia 2");
    sec2();
  } 
  if(x=='3'){
    Serial.println("Secuencia 3");
    sec1();
    sec2();
   } 
   if(x=='4'){
    Serial.println("Secuencia 4");
    sec4();
   } 
   if(x=='5'){
    Serial.println("Secuencia 5");
    sec5();
   } 
   if(x=='6'){
    Serial.println("Secuencia 6");
    sec6();
   } 
   if(x=='7'){
    Serial.println("Secuencia 7");
    sec7();
   } 
   if(x=='8'){
    Serial.println("Secuencia 8");
    sec8();
   }
   }}
  
 void sec1(){
  for(int i=2; i<=9;i++){
      digitalWrite(i,HIGH);
      delay(300);
      digitalWrite(i,LOW);
      }
  }
 void sec2(){
  for(int i=9; i>=2;i--){
      digitalWrite(i,HIGH);
      delay(300);
      digitalWrite(i,LOW);
      }
  }
 void sec4(){
  for(int i=0;i<3;i++){
        mitadArriba();
        delay(100);
        todoOff();
        delay(100);
    }
  for(int i=0;i<3;i++){
        mitadAbajo();
         delay(100);
         todoOff();
         delay(100);
    }
  }
 void sec5(){
        mitadArriba();
        delay(500);
        todoOff();
        delay(500);
        mitadAbajo();
         delay(500);
         todoOff();
         delay(500);    
  }
void sec6(){
   for(int i=2;i<=5;i++){
      todoOff();
      digitalWrite(i,HIGH);
      digitalWrite(11-i,HIGH);
      delay(200);
      }
      todoOff();
  }
 void sec7(){
    for(int i=5;i>=2;i--){
      todoOff();
      digitalWrite(i,HIGH);
      digitalWrite(11-i,HIGH);
      delay(200);
      }
      todoOff();
  }
 void sec8(){
  sec6();
  sec7();
  sec6();
  sec7();
  }

  void mitadArriba(){
        digitalWrite(6,HIGH);
        digitalWrite(7,HIGH);
        digitalWrite(8,HIGH);
        digitalWrite(9,HIGH);
        digitalWrite(2,LOW);
        digitalWrite(3,LOW);
        digitalWrite(4,LOW);
        digitalWrite(5,LOW);
    }
 void mitadAbajo(){
        digitalWrite(2,HIGH);
        digitalWrite(3,HIGH);
        digitalWrite(4,HIGH);
        digitalWrite(5,HIGH);
        digitalWrite(6,LOW);
        digitalWrite(7,LOW);
        digitalWrite(8,LOW);
        digitalWrite(9,LOW);
  }
 void todoOff(){
        digitalWrite(2,LOW );
        digitalWrite(3,LOW);
        digitalWrite(4,LOW);
        digitalWrite(5,LOW);
        digitalWrite(6,LOW);
        digitalWrite(7,LOW);
        digitalWrite(8,LOW);
        digitalWrite(9,LOW);
  }
