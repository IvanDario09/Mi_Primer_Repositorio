#include "../cabecera/Moto.hpp"

//Constructor
Moto::Moto(): Vehiculo(){}
Moto::Moto(string modelo, string placa, string color, unsigned int cilindraje) : Vehiculo(modelo, placa, color),cilindraje(cilindraje){}

//setters
void Moto::setCilindraje(unsigned int cilindraje){this->cilindraje = cilindraje;}
//getters
unsigned int Moto::getCilindraje(){return cilindraje;}

//metodos
void Moto::calcTarifa(){};