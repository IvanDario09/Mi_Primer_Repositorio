#include "../include/Operador.hpp"

//Constructor
Operador::Operador():codigo(""){}
Operador::Operador(string codigo):codigo(codigo){}

//Setters
void Operador::setCodigo(string codigo){this->codigo = codigo;}

//Getters
string Operador::getCodigo(){return codigo;}