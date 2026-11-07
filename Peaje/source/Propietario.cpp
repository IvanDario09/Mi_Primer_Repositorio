#include "../include/Propietario.hpp"

//Constructor
Propietario::Propietario():Persona(),vecino(0){}
Propietario::Propietario(string id, string nombre, string fechaNacimiento,string ciudad,bool vecino): Persona(id,nombre,fechaNacimiento,ciudad),vecino(vecino){}

//Setters
void Propietario::setVecino(bool vecino){this->vecino = vecino;}

//Getters
bool Propietario::getVecino(){return vecino;}
Coche* Propietario::getCoche(){return miCoche;}

//Metodos
void Propietario::asignarCoche(Coche* unCoche){this->miCoche = unCoche;}