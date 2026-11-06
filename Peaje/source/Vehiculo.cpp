#include "../include/Vehiculo.hpp"

//Constructor
Vehiculo::Vehiculo(): placa(""){}
Vehiculo::Vehiculo(string placa): placa(placa){}

//Setters
void Vehiculo::setPlaca(string){
    if (placa.length()<4){
        cout <<"La placa debe tener al menos 6 caracteres" <<endl;
    }else{this->placa = placa;};
}

//getters
string Vehiculo::getPlaca(){return placa;}

//metodos
Vehiculo::~Vehiculo(){}
string Vehiculo::getTipo(){}
string Vehiculo::info()const{}
void Vehiculo::calcTarifa()const{}