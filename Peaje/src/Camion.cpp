#include "Camion.hpp"
#include "Exceptions.hpp"
//Constructor
Camion::Camion(): Vehiculo(), ejes(2){}
/** @brief Constructor parametrizado, los ejes no pueden ser menores a 2, si lo son se lanza una excepción.
* @param placa id del vehículo.
* @param ejes numero entero de ejes que tiene el camión.*/
Camion::Camion(string placa, unsigned int ejes) : Vehiculo(placa){
    try{
        if(ejes<2){throw ExcepcionDatosInvalidos("un camión no puede tener menos de 2 ejes");}
        this->ejes=ejes;
    }catch(const exception& e){cout << "Error: " << e.what() << endl;}
}

//setters
/** 
* @brief setter de ejes.
* @param ejes numero entero de ejes que tiene el camión.*/
void Camion::setEjes(unsigned int ejes){
    try{
        if(ejes<2){throw ExcepcionDatosInvalidos("un camión no puede tener menos de 2 ejes");}
        this->ejes=ejes;
    }catch(const exception& e){cout << "Error: " << e.what() << endl;}
}

/** //getters 
* @brief getter de ejes.
* @return ejes para el camión*/
unsigned int Camion::getEjes(){return ejes;}

/** @brief calcula la tarifa del vehiculo, funcion heredada de vehiculo.
* @return precio de la tarifa de tipo entero, la fórmula se encuentra en el ejercicio.*/
int Camion::calcTarifa() const{return (8000+(100*D))*ejes;}
/** @brief otorga el tipo de vehiculo con el que trabajamos, para funciones posteriores, heredada de vehículo.
* @return cadena de texto con el nombre de vehiculo.*/
string Camion::getTipo()const{return " Camion ";}
/** @brief otorga la información de las variables del camión, funcion heredada de vehiculo.
* @return cadena de texto con toda la información, los enteros los convierte en cadenas tambien.*/
string Camion::info() const{return Vehiculo::info() + " | Ejes: " + to_string(ejes);}
/** @brief Destructor de la clase camion.
* imprime la cadena de texto con el tipo de vehiculo y su placa.*/
Camion::~Camion(){ cout << getTipo() <<" "<<getPlaca()<<endl;}