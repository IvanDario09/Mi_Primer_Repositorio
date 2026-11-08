#include "Caseta.hpp"
#include "Vehiculo.hpp"
#include "Operador.hpp"

//Constructor
Caseta::Caseta():nombre(""),cochesRegistrados(0),camionesRegistrados(0),motosRegistradas(0),BusesRegistrados(0){}
Caseta::Caseta(string nombre, int cochesRegistrados, int camionesRegistrados,int motosRegistradas, int BusesRegistrados):nombre(nombre),cochesRegistrados(cochesRegistrados),camionesRegistrados(camionesRegistrados),motosRegistradas(motosRegistradas),BusesRegistrados(BusesRegistrados){}

//Setters
void Caseta::setNombre(string nombre){this->nombre=nombre;}
void Caseta::setCochesRegistrados(int cochesRegistrados){this->cochesRegistrados=cochesRegistrados;}
void Caseta::setCamionesRegistrados(int camionesRegistrados){this->camionesRegistrados=camionesRegistrados;}
void Caseta::setMotosRegistrados(int motosRegistradas){this->motosRegistradas=motosRegistradas;}
void Caseta::setBusesRegistrados(int busesRegistrados){this->BusesRegistrados=busesRegistrados;}

//Getters
string Caseta::getNombre(){return nombre;}
int Caseta::getCochesRegistrados(){return cochesRegistrados;}
int Caseta::getCamionesRegistrados(){return camionesRegistrados;}
int Caseta::getMotosRegistrados(){return motosRegistradas;}
int Caseta::getBusesRegistrados(){return BusesRegistrados;}

//Metodos
void Caseta::cobrarPeaje(){}