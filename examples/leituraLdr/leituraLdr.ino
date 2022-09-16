include <FotoResistor.h>

FotoResistor fotoResistor(A0);

void setup() {
  Serial.begin(9600);
}

void loop() {

  
  Serial.print("Leitura do LDR = ");
  Serial.println(fotoResistor.Luminosidade);
}
