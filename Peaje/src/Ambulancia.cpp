#include "Ambulancia.hpp"
#include "Propietario.hpp"
//Constructor
Ambulancia::Ambulancia():Vehiculo(placa), Emergencia(unidad,desc){this->enEmergencia=false;}
/** @brief Constructor parametrizado, las emergencias no pueden inicializarse recien creada la ambulancia.
* @param placa id del vehículo.
* @param unidad numero de identificación único de la ambulancia.
* @param desc breve descripción de la ambulancia.*/
Ambulancia::Ambulancia(string placa, string unidad, string desc):Vehiculo(placa),Emergencia(unidad,desc){this->enEmergencia=false;}


/** Metodos
* @brief calcula la tarifa de la ambulancia, si tiene una emergencia, no paga, heredada de vehículo.
* @return entero con el valor de la tarifa.*/
int Ambulancia::calcTarifa() const{
if(enEmergencia){return 0;}
int tarifa; int descuento;
tarifa = 10000 + 200*U;
if((propietario != nullptr) && (propietario->getVecino())){
    descuento=(30+C);
    tarifa= tarifa*(100 - descuento)/100;
}
return tarifa;
}
string Ambulancia::getTipo()const{return " Ambulancia ";}
string Ambulancia::info()const{
    string em= "Sin emergencia";
    if (enEmergencia){em= "En emergencia";}
    return Vehiculo::info() + " | Unidad: " + unidad + " | Descripcion: " + desc + em;}
Ambulancia::~Ambulancia(){cout << getTipo()<<" "<< placa <<endl;}
