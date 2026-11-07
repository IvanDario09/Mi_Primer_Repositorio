#include "../include/Camion.hpp"
    
//Constructor
Camion::Camion(): Vehiculo(), ejes(2){}
Camion::Camion(string placa, unsigned int ejes) : Vehiculo(placa),ejes(ejes){}

//setters
void Camion::setEjes(unsigned int ejes){this->ejes = ejes;}

//getters
unsigned int Camion::getEjes(){return ejes;}

//metodos
void Camion::calcTarifa() const{int tarifa=8000+(100*D);}
string Camion::getTipo()const{return " Camion ";}
string Camion::info() const{}
Camion::~Camion(){ cout << getTipo() <<" "<<getPlaca()<<endl;}