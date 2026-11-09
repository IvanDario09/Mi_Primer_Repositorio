#include "Caseta.hpp"
#include "Vehiculo.hpp"
//Constructor
Caseta::Caseta():nombre(""),cochesRegistrados(0),camionesRegistrados(0),motosRegistradas(0),busesRegistrados(0){}
Caseta::Caseta(string nombre, int cochesRegistrados, int camionesRegistrados,int motosRegistradas, int BusesRegistrados):nombre(nombre),cochesRegistrados(cochesRegistrados),camionesRegistrados(camionesRegistrados),motosRegistradas(motosRegistradas),busesRegistrados(BusesRegistrados){}

//Setters
void Caseta::setNombre(string nombre){this->nombre = nombre;}
void Caseta::setCochesRegistrados(int cochesRegistrados){this->cochesRegistrados=cochesRegistrados;}
void Caseta::setCamionesRegistrados(int camionesRegistrados){this->camionesRegistrados=camionesRegistrados;}
void Caseta::setMotosRegistrados(int motosRegistradas){this->motosRegistradas=motosRegistradas;}
void Caseta::setBusesRegistrados(int busesRegistrados){this->busesRegistrados=busesRegistrados;}
void Caseta::asignarOperador(Operador* unOperador){operador=unOperador;}

//Getters
string Caseta::getNombre(){return nombre;}
int Caseta::getCochesRegistrados(){return cochesRegistrados;}
int Caseta::getCamionesRegistrados(){return camionesRegistrados;}
int Caseta::getMotosRegistrados(){return motosRegistradas;}
int Caseta::getBusesRegistrados(){return busesRegistrados;}
Operador* Caseta::getOperador(){return operador;}

//Metodos
void Caseta::cobrarPeaje(){}
Caseta::~Caseta(){}