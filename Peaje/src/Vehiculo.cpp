#include "Vehiculo.hpp"
#include "Propietario.hpp"
#include "Exceptions.hpp"

//Constructor
Vehiculo::Vehiculo(): placa("ABC000"),propietario(nullptr){}
/** @brief Constructor parametrizado, placa no puede estar vacia ni tener mas de 6 caractéres.
* @param placa placa del vehículo.*/
Vehiculo::Vehiculo(string placa){
    try{
        if(placa.length()<1){throw ExcepcionPlaca("La placa no puede estar vacia");}
        if(placa.length()>6){throw ExcepcionPlaca("La placa no puede tener mas de 6 caractéres");}
    }catch(const exception& e){cout<<"Error: "<<e.what()<<endl;}
    this->placa = placa;
}

/** Setters 
* @brief setter de placa, no mayor a 6 caractéres ni vacia.
* @param placa cadena de texto con la placa del vehículo.*/
void Vehiculo::setPlaca(string placa){
    try{
        if(placa.length()<1){throw ExcepcionPlaca("La placa no puede estar vacia");}
        if(placa.length()>6){throw ExcepcionPlaca("La placa no puede tener mas de 6 caractéres");}
    }catch(const exception& e){cout<<"Error: "<<e.what()<<endl;}
    this->placa = placa;
}
/** @brief asignarle a un vehículo un propietario
* @param unPropietario un propietario para el vehiculo*/
void Vehiculo::asignarPropietario(Propietario* unPropietario){propietario = unPropietario;}

/** Getters
* @brief getter de placa.
* @return cadena de texto con la placa del vehiculo.*/
string Vehiculo::getPlaca(){return placa;}
/** @brief getter de propietario. 
* @return un apuntador de tipo propietario.*/
Propietario* Vehiculo::getPropietario(){return propietario;}

/** Metodos
* @brief obtener el tipo de vehículo.
* @return cadena de texto con la categoria del vehículo, la funcion es de
* tipo virtual.*/
string Vehiculo::getTipo()const{ return "Vehículo: ";}
/** @brief obtener la información del vehiculo.
 * @return cadena de texto con la informacion del vehiculo*/
string Vehiculo::info()const{return getTipo()+ "| Placa: " + placa ;}
/** @brief calculo de tarifa 
 * @return entero con el valor de la tarifa funcion a heredar;*/
int Vehiculo::calcTarifa()const{};
/** @brief destructor de la clase vehículo */
Vehiculo::~Vehiculo(){"Destruyendo Vehiculo: ";}

/** @brief cout para los vehiculos */
ostream &operator << (ostream &os, Vehiculo &unVehiculo){
    os << unVehiculo.info()<<endl;
    return os;
}