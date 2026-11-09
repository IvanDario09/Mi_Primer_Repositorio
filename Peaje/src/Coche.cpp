#include "Coche.hpp"
#include "Propietario.hpp"

//Constructor
Coche::Coche(): Vehiculo(), pasajeros(1){}
Coche::Coche(string placa, unsigned int pasajeros) : Vehiculo(placa), pasajeros(pasajeros){}

//Setters
void Coche::setPasajero(unsigned int pasajeros){ //si quiero luego hacerlo con +=
    if (pasajeros>2){  //Posible Exception
        cout << "El coche solo puede tener 2 pasajeros" << endl;
    }else{this->pasajeros = pasajeros;}
}

//getters
unsigned int Coche::getPasajero()const{return pasajeros;}

//metodos
string Coche::getTipo()const{return " Coche ";}
int Coche::calcTarifa()const{
    int tarifa; int descuento;
    tarifa = 10000 + 200*U; // modificar persona
    if((propietario != nullptr) && (propietario->getVecino())){
        descuento=(30+C);
        tarifa= tarifa*(100 - descuento)/100;
    }
    return tarifa;
}
string Coche::info()const{return Vehiculo::info() + " | Pasajeros: " + to_string(pasajeros);}
Coche::~Coche(){cout << getTipo()<<" "<< placa<<endl;}