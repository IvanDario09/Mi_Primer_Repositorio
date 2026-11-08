#include "Propietario.hpp"

//Constructor
Propietario::Propietario():Persona(),vecino(0){}
Propietario::Propietario(string id, string nombre, string fechaNacimiento,bool vecino) : Persona(id,nombre,fechaNacimiento),vecino(vecino){}

//Setters
void Propietario::setVecino(bool vecino){this->vecino = vecino;}

//Getters
bool Propietario::getVecino(){return vecino;}
Coche* Propietario::getCoche(){return miCoche;}

//Metodos
void Propietario::asignarCoche(Coche* unCoche){this->miCoche = unCoche;}
string Propietario::descripcionPersona(){
    string v="No es Vecino";
    if(vecino){v="Es Vecino";}
    return Persona::descripcionPersona() + v;
}

Propietario::~Propietario(){}