#include "Camion.hpp"
#include "Exceptions.hpp"
//Constructor
Camion::Camion(): Vehiculo(), ejes(2){}
Camion::Camion(string placa, unsigned int ejes) : Vehiculo(placa){
    try{
        if(ejes>3){throw ExcepcionDatosInvalidos("un camión no puede tener mas de 3 ejes");}
        if(ejes<2){throw ExcepcionDatosInvalidos("un camión no puede tener menos de 2 ejes");}
        this->ejes=ejes;
    }catch(const exception& e){cout << "Error: " << e.what() << endl;}
}

//setters
void Camion::setEjes(unsigned int ejes){
    try{
        if(ejes>3){throw ExcepcionDatosInvalidos("un camión no puede tener mas de 3 ejes");}
        if(ejes<2){throw ExcepcionDatosInvalidos("un camión no puede tener menos de 2 ejes");}
        this->ejes=ejes;
    }catch(const exception& e){cout << "Error: " << e.what() << endl;}
}

//getters
unsigned int Camion::getEjes(){return ejes;}

//metodos
int Camion::calcTarifa() const{return (8000+(100*D))*ejes;}

string Camion::getTipo()const{return " Camion ";}

string Camion::info() const{return Vehiculo::info() + " | Ejes: " + to_string(ejes);}

Camion::~Camion(){ cout << getTipo() <<" "<<getPlaca()<<endl;}