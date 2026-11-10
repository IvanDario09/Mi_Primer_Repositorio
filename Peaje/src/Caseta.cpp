#include "Caseta.hpp"
#include "Vehiculo.hpp"
#include "Registro.hpp"
//Constructor
Caseta::Caseta():nombre("Cerro Verde"),cochesRegistrados(0),camionesRegistrados(0),motosRegistradas(0),busesRegistrados(0),totalRegistrado(0),operador(nullptr){}
Caseta::Caseta(string nombre, int cochesRegistrados, int camionesRegistrados,int motosRegistradas, int BusesRegistrados):nombre(nombre),cochesRegistrados(cochesRegistrados),camionesRegistrados(camionesRegistrados),motosRegistradas(motosRegistradas),busesRegistrados(BusesRegistrados){}

//Setters
void Caseta::setNombre(string nombre){this->nombre = nombre;}
void Caseta::setCochesRegistrados(int cochesRegistrados){this->cochesRegistrados=cochesRegistrados;}
void Caseta::setCamionesRegistrados(int camionesRegistrados){this->camionesRegistrados=camionesRegistrados;}
void Caseta::setMotosRegistrados(int motosRegistradas){this->motosRegistradas=motosRegistradas;}
void Caseta::setBusesRegistrados(int busesRegistrados){this->busesRegistrados=busesRegistrados;}
void Caseta::setTotalRegistrado(int totalRegistrado){this->totalRegistrado+=totalRegistrado;}
void Caseta::asignarOperador(Operador* unOperador){operador=unOperador;}

//Getters
string Caseta::getNombre(){return nombre;}
int Caseta::getCochesRegistrados(){return cochesRegistrados;}
int Caseta::getCamionesRegistrados(){return camionesRegistrados;}
int Caseta::getMotosRegistrados(){return motosRegistradas;}
int Caseta::getBusesRegistrados(){return busesRegistrados;}
Operador* Caseta::getOperador(){return operador;}
vector<Registro*> Caseta::getRegistro(){return registros;}

//Metodos
void Caseta::agregarRegistro(Registro* unRegistro){
    string cat = unRegistro->getCategoria();
    switch(cat[1]){
        case 'C':
            cochesRegistrados++;
            break;
        case 'M':
            motosRegistradas++;
            break;
        case 'B':
            busesRegistrados++;
            break;
        case 'T':
            camionesRegistrados++;
            break;
        default:
        cout <<"hola"<<endl;
        //Exception 
    }
    registros.push_back(unRegistro);
}

void Caseta::cobrarPeaje(Vehiculo* unVehiculo){
    int tarifa = unVehiculo->calcTarifa();
    setTotalRegistrado(tarifa);
    Registro* r= new Registro(unVehiculo->getPlaca(),unVehiculo->getTipo(),tarifa);
    agregarRegistro(r);
}

Caseta::~Caseta(){}