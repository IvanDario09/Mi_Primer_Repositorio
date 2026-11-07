#include "../include/Vehiculo.hpp"

//Constructor
Vehiculo::Vehiculo(): placa("ABC000"){}
Vehiculo::Vehiculo(string placa): placa(placa){}

//Setters
void Vehiculo::setPlaca(string){
    if (placa.length()<4){
        cout <<"La placa debe tener al menos 4 caracteres" <<endl;
    }else{this->placa = placa;};
}

//getters
string Vehiculo::getPlaca(){return placa;}

//metodos
Vehiculo::~Vehiculo(){}
string Vehiculo::getTipo()const{}
string Vehiculo::info()const{}
void Vehiculo::calcTarifa()const{}