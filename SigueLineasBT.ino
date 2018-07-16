#include <Servo.h>
#include <SoftwareSerial.h>

int sigueI = 6;
int sigueD = 7;
char caminar = 'c';
SoftwareSerial BT(2,4);
Servo Izquierdo;
Servo Derecho;

void setup() {
  Serial.begin(9600);
  BT.begin(9600);
  Izquierdo.attach(8);
  Derecho.attach(9);
  pinMode(sigueI,INPUT);
  pinMode(sigueD,INPUT);
}

void loop() {
  if (BT.available()){
    caminar = BT.read();
    delay(50);
  }
  if(caminar =='s'){//Si me ordenan parar espero stop
    parar();
    delay(50)
  }else{//Si recibo c de clear es que el camino está despejado
    bool iz = digitalRead(sigueI);
    bool de = digitalRead(sigueD);
    if (iz && de){
      adelante();
      BT.write("u");
      delay(50);
    }else if (iz && !de){
      izquierda();
      BT.write("l");
      delay(50);
    }else if (!iz && de){
      derecha();
      BT.write("r");
      delay(50);
    }else{
      atras();
      BT.write("d");
      delay(50);
    }
  }
}

void adelante(){
  
}

void atras(){
  
}

void izquierda(){
  
}

void derecha(){
  
}

void parar(){
  
}

