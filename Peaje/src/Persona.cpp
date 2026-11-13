#include "Persona.hpp"

//Constructor
Persona::Persona(): id(""), nombre(""), fechaNacimiento("01/01/1930"){}
/** @brief Constructor parametrizado
* @param id id de la persona.
* @param nombre nombre de la persona.
* @param fechaNacimiento fecha de nacimiento de la persona.*/
Persona::Persona(string id, string nombre, string fechaNacimiento): id(id),nombre(nombre),fechaNacimiento(fechaNacimiento){}

/** Setters 
* @brief setter de id.
* @param id cadena de texto con el id de la persona.*/
void Persona::setId(string id){this->id = id;}

/** Setters 
* @brief setter de nombre.
* @param nombre cadena de texto con el nombre de la persona.*/
void Persona::setNombre(string nombre){this->nombre = nombre;}

/** Setters 
* @brief setter de fecha de nacimiento.
* @param fechaNacimiento cadena de texto con la fecha de nacimiento de la persona.*/
void Persona::setFechaNacimiento(string fechaNacimiento){this->fechaNacimiento = fechaNacimiento;}

/** Getters
* @brief getter de id.
* @return cadena de texto con el id de la persona.*/
string Persona::getId(){return id;}
/** @brief getter de nombre.
* @return cadena de texto con el nombre de la persona.*/
string Persona::getNombre(){return nombre;}
/** @brief getter de fecha de nacimiento.
* @return cadena de texto con la fecha de nacimiento de la persona.*/
string Persona::getFechaNacimiento(){return fechaNacimiento;}

/** Metodos
* @brief informacion de la persona.
* @return cadena de texto con la informacion de la persona.*/
string Persona::descripcionPersona(){return getNombre() + " | " + getId() + " | " + getFechaNacimiento() + " | ";}
/** @brief destructor de la clase persona.*/
Persona::~Persona(){}