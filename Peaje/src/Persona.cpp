#include "Persona.hpp"

//Constructor
Persona::Persona(): id(""), nombre(""), fechaNacimiento("01,01,1930"){}
Persona::Persona(string id, string nombre, string fechaNacimiento): id(id),nombre(nombre),fechaNacimiento(fechaNacimiento){}

//Setters
void Persona::setId(string id){this->id = id;}
void Persona::setNombre(string nombre){this->nombre = nombre;}
void Persona::setFechaNacimiento(string fechaNacimiento){this->fechaNacimiento = fechaNacimiento;}

//getters
string Persona::getId(){return id;}
string Persona::getNombre(){return nombre;}
string Persona::getFechaNacimiento(){return fechaNacimiento;}

//Metodos
string Persona::descripcionPersona(){return getNombre() + " | " + getId() + " | " + getFechaNacimiento() + " | ";}
Persona::~Persona(){}