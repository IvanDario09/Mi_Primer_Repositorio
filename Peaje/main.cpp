#include "Persona.hpp"
#include "Vehiculo.hpp"
#include "Caseta.hpp"

int main() {
    // Crear un ciudadano
    Persona* p1= new Persona("1059242276","Jimmy","25/04/2025");
    cout << p1->descripcionPersona();
    // Crear Vehiculos
}

//TODO placa valida, (try/catch), menos de 4 caracteres, heredar de excepcion