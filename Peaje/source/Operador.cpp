#include "../include/Operador.hpp"

//Constructor
Operador::Operador():Persona(),codigo(""){}
Operador::Operador(string codigo,string id, string nombre, string fechaNacimiento,string ciudad):codigo(codigo),Persona(id,nombre,fechaNacimiento,ciudad){}

//Setters
void Operador::setCodigo(string codigo){this->codigo = codigo;}

//Getters
string Operador::getCodigo(){return codigo;}