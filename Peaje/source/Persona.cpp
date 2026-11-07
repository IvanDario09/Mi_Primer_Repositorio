#include "../include/Persona.hpp"

//Constructor
Persona::Persona(): id(""), nombre(""), fechaNacimiento("01,01,1930"), ciudad(""), vecino(true){}
Persona::Persona(string id, string nombre, string fechaNacimiento,string ciudad,bool vecino): id(id),nombre(nombre),fechaNacimiento(fechaNacimiento),ciudad(ciudad),vecino(vecino){}

//Setters
void Persona::setId(string id){this->id = id;}
void Persona::setNombre(string nombre){this->nombre = nombre;}
void Persona::setFechaNacimiento(string fechaNacimiento){this->fechaNacimiento = fechaNacimiento;}
void Persona::setCiudad(string ciudad){this->ciudad = ciudad;}
void Persona::setVecino(bool vecino){this->vecino = vecino;}

//getters
string Persona::getId(){return id;}
string Persona::getNombre(){return nombre;}
string Persona::getFechaNacimiento(){return fechaNacimiento;}
string Persona::getCiudad(){return ciudad;}