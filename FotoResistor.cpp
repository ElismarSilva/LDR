#include <FotoResistor.h>
#include <Arduino.h>


FotoResistor::FotoResistor(int pinLdr){
    pinMode(pinLdr,INPUT);
    pinoLdr = pinLdr;
   
 
}

int FotoResistor:: Luminosidade(){
   estado = analogRead(pinoLdr);

 return estado;

}

