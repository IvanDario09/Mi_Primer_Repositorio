#include "Camion.hpp"
#include "Exceptions.hpp"
//Constructor
Camion::Camion(): Vehiculo(), ejes(2){}
Camion::Camion(string placa, unsigned int ejes) : Vehiculo(placa){
    if(ejes>3){throw ExcepcionDatosInvalidos("un camión no puede tener mas de 3 ejes");}
    if(ejes<1){throw ExcepcionDatosInvalidos("un camión no puede tener menos de 1 eje");}
    this->ejes=ejes;
}

//setters
void Camion::setEjes(unsigned int ejes){
    if(ejes>3){throw ExcepcionDatosInvalidos("un camión no puede tener mas de 3 ejes");}
    if(ejes<1){throw ExcepcionDatosInvalidos("un camión no puede tener menos de 1 eje");}
    this->ejes=ejes;
}

//getters
unsigned int Camion::getEjes(){return ejes;}

//metodos
int Camion::calcTarifa() const{return (8000+(100*D))*ejes;}

string Camion::getTipo()const{return " Camion ";}

string Camion::info() const{return Vehiculo::info() + " | Ejes: " + to_string(ejes);}

Camion::~Camion(){ cout << getTipo() <<" "<<getPlaca()<<endl;}