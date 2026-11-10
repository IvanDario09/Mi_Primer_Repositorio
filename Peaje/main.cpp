#include "Persona.hpp"
#include "Caseta.hpp"
#include "Coche.hpp"
#include "Moto.hpp"
#include "Camion.hpp"
#include "Bus.hpp"
#include "Propietario.hpp"
#include "Operador.hpp"

int main() {
    // Crear un ciudadano
    Persona* p1= new Persona("1059242276","Jimmy","25/04/2025");
    cout << p1->descripcionPersona()<<endl;
    cout << "===================================="<<endl;
    Operador* o1= new Operador("104626011515",p1->getId(),p1->getNombre(),p1->getFechaNacimiento());
    cout << o1->descripcionPersona()<<endl;
    cout <<"======================================="<<endl;
    Persona* p2= new Persona("2529222222","Carlos","");
    cout << p2->descripcionPersona()<<endl;
    cout<<"========================================"<<endl;
    Propietario* prop2= new Propietario(p2->getId(),p2->getNombre(),p2->getFechaNacimiento(),0);
    cout << prop2->descripcionPersona()<<endl;
    cout<<"========================================"<<endl;
    // Crear Vehiculos
    Coche* c1= new Coche();
    cout << *c1;
    cout<<"========================================"<<endl;
    Moto* m1= new Moto();
    cout << *m1;
    cout<<"========================================"<<endl;
    Camion* camion1= new Camion();
    cout << *camion1;
    cout<<"========================================"<<endl;

    //Tarifa
    m1->calcTarifa();

}

//TODO placa valida, (try/catch), menos de 4 caracteres, heredar de excepcion