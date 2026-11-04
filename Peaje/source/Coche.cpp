#include "../cabecera/Coche.hpp"

//Constructor
Coche::Coche(): Vehiculo(){}
Coche::Coche(string modelo, string placa, string color) : Vehiculo(modelo, placa, color){}

//getters
vector<Ciudadano*> Coche::getPasajero(){return pasajeros;}

//metodos
Coche&Coche:: operator+=(Ciudadano* unCiudadano){
    for (unsigned int i=0; i<pasajeros.size();i++){
        if(unCiudadano->getId() == pasajeros[i]->getId()){
            cout << "El ciudadano ya se encuentra en el registro"<<endl;
            return *this;
        }
    }
    pasajeros.push_back(unCiudadano);
    return *this;
}
void Coche::calcTarifa(){}