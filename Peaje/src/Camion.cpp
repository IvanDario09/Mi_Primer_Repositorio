#include "Camion.hpp"

//Constructor
Camion::Camion(): Vehiculo(), ejes(2){}
Camion::Camion(string placa, unsigned int ejes) : Vehiculo(placa){if(ejes>3){cout <<"un camión no puede tener mas de 3 ejes"<<endl;}else{this->ejes=ejes;}}

//setters
void Camion::setEjes(unsigned int ejes){if(ejes>3){cout <<"un camión no puede tener mas de 3 ejes"<<endl;}else{this->ejes=ejes;}}//Exception

//getters
unsigned int Camion::getEjes(){return ejes;}

//metodos
int Camion::calcTarifa() const{return (8000+(100*D))*ejes;}

string Camion::getTipo()const{return " Camion ";}

string Camion::info() const{return Vehiculo::info() + " | Ejes: " + to_string(ejes);}

Camion::~Camion(){ cout << getTipo() <<" "<<getPlaca()<<endl;}