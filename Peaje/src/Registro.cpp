#include "Registro.hpp"

 //Constructor
Registro::Registro():placa("AAA000"),categoria("No identificado"),precioRegistro(0){}
/** @brief Constructor parametrizado
* @param placa placa del vehículo.
* @param categoria categoría del vehículo.
* @param precioRegistro precio del registro.*/
Registro::Registro(string placa,string categoria,int precioRegistro):placa(placa),categoria(categoria),precioRegistro(precioRegistro){}

/** Setters 
* @brief setter de placa.
* @param placa cadena de texto con la placa del vehículo.*/
void Registro::setPlaca(string placa){this->placa = placa;}
/** @brief setter de categoría.
* @param categoria cadena de texto con la categoría del vehículo.*/
void Registro::setCategoria(string categoria){this->categoria = categoria;}
/** @brief setter de precio del registro.
* @param precioRegistro entero con el precio del registro.*/
void Registro::setPrecioRegistro(int precioRegistro){this->precioRegistro = precioRegistro;}

/** Getters
* @brief getter de placa.
* @return cadena de texto con la placa del vehículo.*/
string Registro::getPlaca()const{return placa;}
/** @brief getter de categoría.
* @return cadena de texto con la categoría del vehículo.*/
string Registro::getCategoria()const{return categoria;}
/** @brief getter de precio del registro.
* @return entero con el precio del registro.*/
int Registro::getPrecioRegistro()const{return precioRegistro;}

/** Metodos
* @brief informacion del registro.
* @return cadena de texto con la informacion del registro.*/
string Registro::info()const{return "| Placa: " + placa + " | " + "Categoria:" + categoria + " | " + "Precio: " + to_string(precioRegistro);}
/** @brief destructor de la clase registro.*/
Registro::~Registro(){ cout << "Destruyendo Registro... " << endl;}