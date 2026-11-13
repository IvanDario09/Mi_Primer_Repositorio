#include "Propietario.hpp"

//Constructor
Propietario::Propietario():Persona(),vecino(0){}
/** @brief Constructor parametrizado
* @param id id del propietario.
* @param nombre nombre del propietario.
* @param fechaNacimiento fecha de nacimiento del propietario.
* @param vecino indica si el propietario es vecino, a travez de un booleano*/
Propietario::Propietario(string id, string nombre, string fechaNacimiento,bool vecino) : Persona(id,nombre,fechaNacimiento),vecino(vecino){}

/** Setters 
* @brief setter de vecino.
* @param vecino booleano que indica si el propietario es vecino.*/
void Propietario::setVecino(bool vecino){this->vecino = vecino;}

/** Getters
* @brief getter de vecino.
* @return booleano que indica si el propietario es vecino.*/
bool Propietario::getVecino(){return vecino;}
/** @brief getter de coche.
* @return puntero a Coche con el coche del propietario.*/
Coche* Propietario::getCoche(){return miCoche;}

/** Metodos
* @brief asigna un coche al propietario.
* @param unCoche puntero a Coche con el coche del propietario.*/
void Propietario::asignarCoche(Coche* unCoche){this->miCoche = unCoche;}

/** @brief informacion del propietario.
* @return cadena de texto con la informacion del propietario.*/
string Propietario::descripcionPersona(){
    string v="No es Vecino";
    if(vecino){v="Es Vecino";}
    return Persona::descripcionPersona() + v;
}
/** @brief destructor de la clase propietario.*/
Propietario::~Propietario(){}