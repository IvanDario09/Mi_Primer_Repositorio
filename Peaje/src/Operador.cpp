#include "Operador.hpp"

//Constructor
Operador::Operador():Persona(),codigo(""){}
/** @brief Constructor parametrizado
* @param codigo codigo del operador.
* @param id id del operador.
* @param nombre nombre del operador.
* @param fechaNacimiento fecha de nacimiento del operador.*/
Operador::Operador(string codigo,string id, string nombre, string fechaNacimiento):codigo(codigo),Persona(id,nombre,fechaNacimiento){}

/** Setters 
* @brief setter de codigo.
* @param codigo cadena de texto con el codigo del operador.*/
void Operador::setCodigo(string codigo){this->codigo = codigo;}

/** Getters
* @brief getter de codigo.
* @return cadena de texto con el codigo del operador.*/
string Operador::getCodigo(){return codigo;}

/** Metodos
* @brief informacion del operador.
* @return cadena de texto con la informacion del operador.*/
string Operador::descripcionPersona(){return Persona::descripcionPersona() + " Codigo empleado: " + getCodigo();}

/** @brief Destructor de la clase operador.*/
Operador::~Operador(){}