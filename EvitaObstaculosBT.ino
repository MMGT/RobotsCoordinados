#include <SR04.h>
#include <Servo.h>
#include <SoftwareSerial.h>

SoftwareSerial BT(2,4);
Servo Izquierdo;
Servo Derecho;
SR04 detector = SR04(4,5);

void setup() {
  Serial.begin(9600);
  BT.begin(9600);
  Izquierdo.attach(8);
  Derecho.attach(9);

}

void loop(){
  long a = detector.Distance();
  if (a < 30){
    parar();
    BT.write('s');
    delay(100);
  }else{
    BT.write('o');
    if (BT.available()){
      char c = BT.read();
      switch (c){
        case 'u':
          adelante();
          break;
        case 'd':
          atras();
          break;
        case 'l':
          izquierda();
          break;
        case 'r':
          derecha();
          break;
        default:
          break;
      }
    }
    delay(10);
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

