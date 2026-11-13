#include "Registro.hpp"

 //Constructor
Registro::Registro():placa("AAA000"),categoria("No identificado"),precioRegistro(0){}
Registro::Registro(string placa,string categoria,int precioRegistro):placa(placa),categoria(categoria),precioRegistro(precioRegistro){}

//Setters
void Registro::setPlaca(string placa){this->placa = placa;}
void Registro::setCategoria(string categoria){this->categoria = categoria;}
void Registro::setPrecioRegistro(int precioRegistro){this->precioRegistro = precioRegistro;}

//Getters
string Registro::getPlaca()const{return placa;}
string Registro::getCategoria()const{return categoria;}
int Registro::getPrecioRegistro()const{return precioRegistro;}

//Metodos
string Registro::info()const{return "| Placa: " + placa + " | " + "Categoria:" + categoria + " | " + "Precio: " + to_string(precioRegistro);}
Registro::~Registro(){ cout << "Destruyendo Registro... " << endl;}

ostream &operator << (ostream &os, Registro &unRegistro){return os<<unRegistro.info()<<endl;}