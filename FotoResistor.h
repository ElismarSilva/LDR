#ifndef FOTORESISTOR_H_INCLUDED
#define FOTORESISTOR_H_INCLUDED

class  FotoResistor{

public:
    FotoResistor(int pinLdr);
    int Luminosidade();
   
private:
    int  pinoLdr;
    int estado;
   
};


#endif // SENSORLDR_H_INCLUDED
