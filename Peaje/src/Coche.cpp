#include "Coche.hpp"
#include "Propietario.hpp"
#include "Exceptions.hpp"

//Constructor
Coche::Coche(): Vehiculo(), pasajeros(1){}
/** @brief Constructor parametrizado
* @param placa id del vehículo.
* @param pasajeros numero entero de pasajeros que lleva el coche.*/
Coche::Coche(string placa, unsigned int pasajeros): Vehiculo(placa){
    try{
        if (pasajeros<1){throw ExcepcionDatosInvalidos("El coche debe tener al menos 1 pasajero");}
    }catch(const exception& e){cout << "Error: " << e.what()<<endl;}
    this->pasajeros = pasajeros;
}

/** Setters 
* @brief setter de pasajeros.
* @param pasajeros numero entero de sillas que lleva el coche.*/
void Coche::setPasajero(unsigned int pasajeros){
    try{
        if (pasajeros<1){throw ExcepcionDatosInvalidos("El coche debe tener al menos 1 pasajero");}
    }catch(const exception& e){cout << "Error: " << e.what()<<endl;}
    this->pasajeros = pasajeros;
}

/** Getters
* @brief getter de pasajeros.
* @return numero de pasajeros que lleva el coche*/
unsigned int Coche::getPasajero()const{return pasajeros;}

/** Metodos 
* @brief otorga el tipo de vehiculo con el que trabajamos, para funciones posteriores, heredada de vehículo.
* @return cadena de texto con el nombre de vehiculo.*/
string Coche::getTipo()const{return " Coche ";}
/** @brief calcula la tarifa del vehiculo, funcion heredada de vehiculo.
* @return precio de la tarifa de tipo entero, la fórmula se encuentra en el ejercicio.*/
int Coche::calcTarifa()const{
    int tarifa; int descuento;
    tarifa = 10000 + 200*U;
    if((propietario != nullptr) && (propietario->getVecino())){
        descuento=(30+C);
        tarifa= tarifa*(100 - descuento)/100;
    }
    return tarifa;
}
/** @brief otorga la información de las variables del coche, funcion heredada de vehiculo, 
* si el propietario es vecino se le aplica un descuento.
* @return cadena de texto con toda la información, los enteros los convierte en cadenas tambien.*/
string Coche::info()const{return Vehiculo::info() + " | Pasajeros: " + to_string(pasajeros);}
/** @brief Destructor de la clase coche.*/
Coche::~Coche(){cout << getTipo()<<" "<< getPlaca()<<endl;}