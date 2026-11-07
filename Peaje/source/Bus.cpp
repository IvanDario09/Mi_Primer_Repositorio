#include "../include/Bus.hpp"

//Constructor
Bus::Bus():Vehiculo(),puestos(0){}
Bus::Bus(string placa,unsigned int puestos):Vehiculo(placa),puestos(puestos){}

//Setters
void Bus::setPuestos(unsigned int puestos){this->puestos= puestos;}
//getters
int Bus::getPuesto() const{return puestos;}

//metodos
void Bus::calcTarifa() const{int tarifa=14000+(300*D);}
string Bus::info() const{}
string Bus::getTipo() const{return " Bus ";}
Bus::~Bus(){cout <<getTipo()<<" "<<getPlaca()<<endl;}