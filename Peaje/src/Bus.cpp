#include "Bus.hpp"

//Constructor
Bus::Bus():Vehiculo(),puestos(1){}
/** @brief Constructor parametrizado
* @param placa id del vehículo.
* @param puestos numero entero de sillas que lleva el bus.*/
Bus::Bus(string placa,unsigned int puestos):Vehiculo(placa),puestos(puestos){}

//Setters
/** 
* @brief setter de puestos.
* @param puestos numero entero de sillas que lleva el bus.*/
void Bus::setPuestos(unsigned int puestos){this->puestos= puestos;}
//getters
/** 
* @brief getter de puestos.
* @return puestos para el bus*/
int Bus::getPuesto() const{return puestos;}

/** metodos 
* @brief calcula la tarifa del vehiculo, funcion heredada de vehiculo.
* @return precio de la tarifa de tipo entero, la fórmula se encuentra en el ejercicio.*/
int Bus::calcTarifa() const{return 14000+(300*D);}
/** 
* @brief otorga la información de las variables del bus, funcion heredada de vehiculo.
* @return cadena de texto con toda la información, los enteros los convierte en cadenas tambien.*/
string Bus::info() const{return Vehiculo::info() + " | N° puestos: " + to_string(puestos);}
/** 
* @brief otorga el tipo de vehiculo con el que trabajamos, para funciones posteriores, heredada de vehículo.
* @return cadena de texto con el nombre de vehiculo.*/
string Bus::getTipo() const{return " Bus ";}
/** @brief Destructor de la clase bus.
* imprime la cadena de texto con el tipo de vehiculo y su placa.*/
Bus::~Bus(){cout << getTipo()<<" "<< placa <<endl;}