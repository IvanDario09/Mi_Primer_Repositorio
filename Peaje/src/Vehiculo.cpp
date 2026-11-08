#include "Vehiculo.hpp"
#include "Propietario.hpp"

//Constructor
Vehiculo::Vehiculo(): placa("ABC000"),propietario(nullptr){}
Vehiculo::Vehiculo(string placa){
    if(placa.length()<6){
        //exception
    }else{this->placa = placa;}
}

//Setters
void Vehiculo::setPlaca(string){
    if (placa.length()<6){
        cout <<"La placa debe tener al menos 6 caracteres" <<endl; //exception
    }else{this->placa = placa;};
}
void Vehiculo::asignarPropietario(Propietario* unPropietario){this->propietario = unPropietario;}

//getters
string Vehiculo::getPlaca(){return placa;}
Propietario* Vehiculo::getPropietario(){return propietario;}

//metodos
Vehiculo::~Vehiculo(){cout <<"Destruyendo ";}
string Vehiculo::getTipo()const{}
string Vehiculo::info()const{return getTipo()+ "| Placa: " + placa ;}
void Vehiculo::calcTarifa()const{}


//Cout para los vehiculos
ostream &operator << (ostream &os, Vehiculo &unVehiculo){return os << unVehiculo.info()<<endl;}