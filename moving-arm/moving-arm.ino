const int dir=4;
const int pas=5;
int c=1;
const int cliquet_avancer=8;    
const int bouton=9;
const int cliquet_reculer=10;  
const int transistor=11;  


void setup() {
  pinMode(dir,OUTPUT);
  pinMode(pas,OUTPUT);
  pinMode(transistor,OUTPUT);
  pinMode(cliquet_avancer,INPUT_PULLUP);
  pinMode(cliquet_reculer,INPUT_PULLUP);
  pinMode(bouton,INPUT_PULLUP);
  digitalWrite(dir,HIGH);
  Serial.begin(9600);
  }

void avancer(){
  digitalWrite(dir,HIGH);
  tone(pas,400);
  digitalWrite(transistor,HIGH);}


void reculer(){
  digitalWrite(dir,LOW);
  tone(pas,400);
  digitalWrite(transistor,HIGH);
}

void arreter(){
  noTone(pas);
  digitalWrite(dir,HIGH);
  tone(pas,300);
  delay(100);
  noTone(pas);
  digitalWrite(transistor,LOW);
}


void loop() {
  if (digitalRead(bouton)==LOW){
    arreter();
    delay(100);
    while (digitalRead(cliquet_avancer)==HIGH){
      c=0;
      Serial.println("azerty");
    }
    c=1;
  }
  
  if (digitalRead(cliquet_avancer)==HIGH and c==1){
      while (digitalRead(cliquet_reculer)==LOW){ // on continue d'avancer
      avancer();}
    c=0;        // on ne pourra plus re-rentrer dans le 2ème if tant que c ne sera pas réarmé dans le 1er if
    reculer();
  }
}
    
