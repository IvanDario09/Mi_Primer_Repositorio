    #include "../cabecera/Camion.hpp"
    
//Constructor
Camion::Camion(): Vehiculo(){}
Camion::Camion(string modelo, string placa, string color, unsigned int ejes) : Vehiculo(modelo, placa, color),ejes(ejes){}

//setters
void Camion::setEjes(unsigned int ejes){this->ejes = ejes;}

//getters
unsigned int Camion::getEjes(){return ejes;}

//metodos
void Camion::calcTarifa(){};