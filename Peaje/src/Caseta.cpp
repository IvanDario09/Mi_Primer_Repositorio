#include "Caseta.hpp"
#include "Vehiculo.hpp"
#include "Registro.hpp"
//Constructor
Caseta::Caseta():nombre("Cerro Verde"),cochesRegistrados(0),camionesRegistrados(0),motosRegistradas(0),busesRegistrados(0),totalRegistrado(0),operador(nullptr){}
/** @brief Constructor parametrizado.
* @param nombre nombre de la caseta.
* @param cochesRegistrados numero de coches registrados.
* @param camionesRegistrados numero de camiones registrados.
* @param motosRegistradas numero de motos registradas.
* @param BusesRegistrados numero de buses registrados.*/
Caseta::Caseta(string nombre, int cochesRegistrados, int camionesRegistrados,int motosRegistradas, int BusesRegistrados):nombre(nombre),cochesRegistrados(cochesRegistrados),camionesRegistrados(camionesRegistrados),motosRegistradas(motosRegistradas),busesRegistrados(BusesRegistrados){}

/** //Setters 
* @brief setter de puestos.
* @param nombre cadena que nombra la caseta.*/
void Caseta::setNombre(string nombre){this->nombre = nombre;}
/** @brief setter de coches registrados.
* @param cochesRegistrados numero de coches registrados.*/
void Caseta::setCochesRegistrados(int cochesRegistrados){this->cochesRegistrados=cochesRegistrados;}
/** @brief setter de camiones registrados.
* @param camionesRegistrados numero de camiones registrados.*/
void Caseta::setCamionesRegistrados(int camionesRegistrados){this->camionesRegistrados=camionesRegistrados;}
/** @brief setter de motos registradas.
* @param motosRegistradas numero de motos registradas.*/
void Caseta::setMotosRegistrados(int motosRegistradas){this->motosRegistradas=motosRegistradas;}
/** @brief setter de buses registrados.
* @param busesRegistrados numero de buses registrados.*/
void Caseta::setBusesRegistrados(int busesRegistrados){this->busesRegistrados=busesRegistrados;}
/** @brief setter de total registrado, suma el total registrado con el parametro ingresado.
* @param totalRegistrado numero de vehículos registrados.*/
void Caseta::setTotalRegistrado(int totalRegistrado){this->totalRegistrado+=totalRegistrado;}
/** @brief asigna un operador a la caseta.
* @param unOperador apuntador de tipo operador.*/
void Caseta::asignarOperador(Operador* unOperador){operador=unOperador;}

/** //Getters
* @brief getter de nombre.
* @return nombre de la caseta*/
string Caseta::getNombre(){return nombre;}
/** @brief getter de coches registrados.
* @return coches registrados para la caseta*/
int Caseta::getCochesRegistrados(){return cochesRegistrados;}
/** @brief getter de camiones registrados.
* @return camiones registrados para la caseta*/
int Caseta::getCamionesRegistrados(){return camionesRegistrados;}
/** @brief getter de motos registradas.
* @return motos registradas para la caseta*/
int Caseta::getMotosRegistrados(){return motosRegistradas;}
/** @brief getter de buses registrados.
* @return buses registrados para la caseta*/
int Caseta::getBusesRegistrados(){return busesRegistrados;}
/** @brief getter de total registrado.
* @return total registrado para la caseta*/
int Caseta::getTotalRegistrado(){return totalRegistrado;}
/** @brief getter de operador.
* @return operador para la caseta*/
Operador* Caseta::getOperador(){return operador;}
/** @brief getter de registros.
* @return vector de registros para la caseta*/
vector<Registro*> Caseta::getRegistro(){return registros;}

/** metodos 
* @brief crea un registro con la información del vehículo y lo agrega al vector de registros,
* además de incrementar el contador de la categoría correspondiente accediendo a la funcion getTipo() del vehiculo.
* @param unRegistro apuntador de tipo Registro.*/
void Caseta::agregarRegistro(Registro* unRegistro){
    string cat = unRegistro->getCategoria();
    if(cat==" Coche "){cochesRegistrados++;}
    if(cat==" Camion "){camionesRegistrados++;}
    if(cat==" Moto "){motosRegistradas++;}
    if(cat==" Bus "){busesRegistrados++;}
    registros.push_back(unRegistro);
}
/** @brief crea un registro con la información del vehículo y lo agrega al vector de registros,
* además de incrementar el contador de la categoría correspondiente accediendo a la funcion getTipo() del vehiculo.
* @param unVehiculo apuntador de tipo Vehiculo.*/
void Caseta::cobrarPeaje(Vehiculo* unVehiculo){
    int tarifa = unVehiculo->calcTarifa();
    setTotalRegistrado(tarifa);
    Registro* r= new Registro(unVehiculo->getPlaca(),unVehiculo->getTipo(),tarifa);
    agregarRegistro(r);
}
/** @brief otorga la información de las categorías registradas en la caseta.
* @return una unica cadena con la información de las categorías registradas.*/
string Caseta::infoCategoriasRegistradas(){
    return "Coches Registrados: " + to_string(getCochesRegistrados()) + "\n" 
    + "Camiones Registrados: " + to_string(getCamionesRegistrados()) + "\n"
    + "Motos Registradas: " + to_string(getMotosRegistrados()) + "\n" +
    "Buses Registrados: " + to_string(getBusesRegistrados())+"\n";
}
/** @brief destructor de la clase caseta.*/
Caseta::~Caseta(){cout << "TODOS LOS PROCESOS TIENEN UN INICIO Y FIN, PORQUE TODO LO QUE NACE, TIENE QUE MORIR... (destruyendo caseta)"<<endl;
    for(int i=0; i<registros.size(); i++){delete registros[i];}
    registros.clear();}