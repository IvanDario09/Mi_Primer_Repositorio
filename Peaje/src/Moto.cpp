#include "Moto.hpp"
#include "Propietario.hpp"

//Constructor
Moto::Moto(): Vehiculo(){}
Moto::Moto(string placa, unsigned int cilindraje) : Vehiculo(placa),cilindraje(cilindraje){}

//setters
void Moto::setCilindraje(unsigned int cilindraje){this->cilindraje=cilindraje;}
//getters
unsigned int Moto::getCilindraje(){return cilindraje;}

//metodos
string Moto::getTipo()const{return " Moto ";}

string Moto::info() const{
    string cil = "Bajo cilindraje";
    if(cilindraje>=400){cil="Alto cilindraje";}
    return Vehiculo::info() + " | Cilindraje:" + to_string(cilindraje) + " "+ cil;
}

Moto::~Moto(){cout << Moto::getTipo() <<" "<< placa <<endl;}

int Moto::calcTarifa()const{
    int tarifa; int descuento;
    tarifa = 3000 + 100*U; // modificar persona
    if((propietario != nullptr) && (propietario->getVecino())){
        descuento=(30+C);
        tarifa=tarifa *(100 - descuento)/100;
    }
    return tarifa;
};