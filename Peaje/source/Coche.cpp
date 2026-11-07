#include "../include/Coche.hpp"
#include "../include/Variante.hpp"

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
void Coche::calcTarifa()const{
    double tarifa;
    tarifa = 10000 + 200*U; // modificar persona
}

string Coche::getTipo()const{return "Coche";}