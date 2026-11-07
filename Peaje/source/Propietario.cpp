#include "../include/Propietario.hpp"

//Constructor
Propietario::Propietario():vecino(1){}
Propietario::Propietario(bool vecino):vecino(vecino){}

//Setters
void Propietario::setVecino(bool vecino){this->vecino = vecino;}

//Getters
bool Propietario::getVecino(){return vecino;}
Coche* Propietario::getCoche(){return miCoche;}

//Metodos
void Propietario::asignarCoche(Coche* unCoche){this->miCoche = unCoche;}