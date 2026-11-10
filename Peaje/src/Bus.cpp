#include "Bus.hpp"

//Constructor
Bus::Bus():Vehiculo(),puestos(1){}
Bus::Bus(string placa,unsigned int puestos):Vehiculo(placa),puestos(puestos){}

//Setters
void Bus::setPuestos(unsigned int puestos){this->puestos= puestos;}
//getters
int Bus::getPuesto() const{return puestos;}

//metodos
int Bus::calcTarifa() const{return 14000+(300*D);}
string Bus::info() const{return Vehiculo::info() + " | N° puestos: " + to_string(puestos);}
string Bus::getTipo() const{return " Bus ";}
Bus::~Bus(){cout << getTipo()<<" "<< placa <<endl;}