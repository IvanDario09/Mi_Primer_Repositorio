#include "../cabecera/Peaje.hpp"

//Constructor
Peaje::Peaje():nombre(""),fechaRegistro(""),horaRegistro(""){}
Peaje::Peaje(string nombre, string fechaRegistro, string horaRegistro): nombre(nombre),fechaRegistro(fechaRegistro),horaRegistro(horaRegistro){}

//Setters
void Peaje::setNombre(string nombre){this->nombre = nombre;}
void Peaje::setFechaRegistro(string fechaRegistro){this->fechaRegistro = fechaRegistro;}
void Peaje::setHoraRegistro(string horaRegistro){this->horaRegistro = horaRegistro;}

//getters
string Peaje::getNombre(){return nombre;}
string Peaje::getFechaRegistro(){return fechaRegistro;}
string Peaje::getHoraRegistro(){return horaRegistro;}
vector<Vehiculo*> Peaje::getVehiculo(){return vehiculos;}
vector<Ciudadano*> Peaje::getCiudadano(){return ciudadanos;}

//Metodos
void Peaje::cobrarPeaje(Vehiculo* unVehiculo){
    unVehiculo->calcTarifa();
}
