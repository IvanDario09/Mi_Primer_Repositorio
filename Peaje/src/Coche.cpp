#include "Coche.hpp"
#include "Propietario.hpp"
#include "Exceptions.hpp"

//Constructor
Coche::Coche(): Vehiculo(), pasajeros(1){}
Coche::Coche(string placa, unsigned int pasajeros): Vehiculo(placa){
    try{
        if (pasajeros<1){throw ExcepcionDatosInvalidos("El coche debe tener al menos 1 pasajero");}
    }catch(const exception& e){cout << "Error: " << e.what()<<endl;}
    this->pasajeros = pasajeros;
}

//Setters
void Coche::setPasajero(unsigned int pasajeros){
    try{
        if (pasajeros<1){throw ExcepcionDatosInvalidos("El coche debe tener al menos 1 pasajero");}
    }catch(const exception& e){cout << "Error: " << e.what()<<endl;}
    this->pasajeros = pasajeros;
}

//getters
unsigned int Coche::getPasajero()const{return pasajeros;}

//metodos
string Coche::getTipo()const{return " Coche ";}
int Coche::calcTarifa()const{
    int tarifa; int descuento;
    tarifa = 10000 + 200*U;
    if((propietario != nullptr) && (propietario->getVecino())){
        descuento=(30+C);
        tarifa= tarifa*(100 - descuento)/100;
    }
    return tarifa;
}
string Coche::info()const{return Vehiculo::info() + " | Pasajeros: " + to_string(pasajeros);}
Coche::~Coche(){cout << getTipo()<<" "<< getPlaca()<<endl;}