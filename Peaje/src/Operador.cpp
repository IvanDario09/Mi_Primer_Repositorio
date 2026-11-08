#include "Operador.hpp"

//Constructor
Operador::Operador():Persona(),codigo(""){}
Operador::Operador(string codigo,string id, string nombre, string fechaNacimiento):codigo(codigo),Persona(id,nombre,fechaNacimiento){}

//Setters
void Operador::setCodigo(string codigo){this->codigo = codigo;}

//Getters
string Operador::getCodigo(){return codigo;}
string Operador::descripcionPersona(){return Persona::descripcionPersona() + getCodigo();}

//Metodos
Operador::~Operador(){}