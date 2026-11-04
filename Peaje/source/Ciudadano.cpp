#include "../cabecera/Ciudadano.hpp"

//Constructor
Ciudadano::Ciudadano(): id(""), nombre(""), fechaNacimiento("01,01,1930"), ciudad(""), vecino(true){}
Ciudadano::Ciudadano(string id, string nombre, string fechaNacimiento,string ciudad,bool vecino): id(id),nombre(nombre),fechaNacimiento(fechaNacimiento),ciudad(ciudad),vecino(vecino){}

//Setters
void Ciudadano::setId(string id){this->id = id;}
void Ciudadano::setNombre(string nombre){this->nombre = nombre;}
void Ciudadano::setFechaNacimiento(string fechaNacimiento){this->fechaNacimiento = fechaNacimiento;}
void Ciudadano::setCiudad(string ciudad){this->ciudad = ciudad;}
void Ciudadano::setVecino(bool vecino){this->vecino = vecino;}

//getters
string Ciudadano::getId(){return id;}
string Ciudadano::getNombre(){return nombre;}
string Ciudadano::getFechaNacimiento(){return fechaNacimiento;}
string Ciudadano::getCiudad(){return ciudad;}