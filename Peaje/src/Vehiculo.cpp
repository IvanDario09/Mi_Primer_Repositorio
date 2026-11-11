#include "Vehiculo.hpp"
#include "Propietario.hpp"
#include "Exceptions.hpp"

//Constructor
Vehiculo::Vehiculo(): placa("ABC000"),propietario(nullptr){}
Vehiculo::Vehiculo(string placa){
    try{
        if(placa.length()<1){throw ExcepcionPlaca("La placa no puede estar vacia");}
        if(placa.length()>6){throw ExcepcionPlaca("La placa no puede tener mas de 6 caractéres");}
    }catch(const exception& e){cout<<"Error: "<<e.what()<<endl;}
    this->placa = placa;
}

//Setters
void Vehiculo::setPlaca(string placa){
    try{
        if(placa.length()<1){throw ExcepcionPlaca("La placa no puede estar vacia");}
        if(placa.length()>6){throw ExcepcionPlaca("La placa no puede tener mas de 6 caractéres");}
    }catch(const exception& e){cout<<"Error: "<<e.what()<<endl;}
    this->placa = placa;
}
void Vehiculo::asignarPropietario(Propietario* unPropietario){propietario = unPropietario;}

//getters
string Vehiculo::getPlaca(){return placa;}
Propietario* Vehiculo::getPropietario(){return propietario;}

//metodos
Vehiculo::~Vehiculo(){cout <<"Destruyendo: ";}
string Vehiculo::getTipo()const{ return "Vehículo: ";}
string Vehiculo::info()const{return getTipo()+ "| Placa: " + placa ;}
int Vehiculo::calcTarifa()const{};


//Cout para los vehiculos
ostream &operator << (ostream &os, Vehiculo &unVehiculo){
    os << unVehiculo.info()<<endl;
    return os;
}