#include "Moto.hpp"
#include "Propietario.hpp"

//Constructor
Moto::Moto(): Vehiculo(){}
/** @brief Constructor parametrizado
* @param placa id del vehículo.
* @param cilindraje numero entero de sillas que lleva el bus.*/
Moto::Moto(string placa, unsigned int cilindraje) : Vehiculo(placa),cilindraje(cilindraje){}

/** Setters 
* @brief setter de cilindraje.
* @param cilindraje numero entero del cilindraje de una moto .*/
void Moto::setCilindraje(unsigned int cilindraje){this->cilindraje=cilindraje;}

/** Getters
* @brief getter de cilindraje.
* @return numero de cilindraje que tiene la moto*/
unsigned int Moto::getCilindraje(){return cilindraje;}

/** Metodos 
* @brief otorga el tipo de vehiculo con el que trabajamos, para funciones posteriores, heredada de vehículo.
* @return cadena de texto con el nombre de vehiculo.*/
string Moto::getTipo()const{return " Moto ";}

/** @brief otorga la información de las variables de la moto, funcion heredada de vehiculo.
* @return cadena de texto con toda la información, los enteros los convierte en cadenas tambien.*/
string Moto::info() const{
    string cil = "Bajo cilindraje";
    if(cilindraje>=400){cil="Alto cilindraje";}
    return Vehiculo::info() + " | Cilindraje:" + to_string(cilindraje) + " "+ cil;
}

/** @brief Destructor de la clase coche.*/
Moto::~Moto(){cout << Moto::getTipo() <<" "<< placa <<endl;}

/** @brief calcula la tarifa del vehiculo, funcion heredada de vehiculo,
* si el propietario es vecino se le aplica un descuento.
* @return precio de la tarifa de tipo entero, la fórmula se encuentra en el ejercicio.*/
int Moto::calcTarifa()const{
    int tarifa; int descuento;
    tarifa = 3000 + 100*U;
    if((propietario != nullptr) && (propietario->getVecino())){
        descuento=(30+C);
        tarifa=tarifa *(100 - descuento)/100;
    }
    return tarifa;
};