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
/*void Vehiculo::informacionV(){
    cout << "Modelo: " << getModelo() << endl;
    cout << "Placa: " << getPlaca() << endl;
    cout << "Color: " << getColor() << endl;
}*/
void Vehiculo::calcTarifa()const{}