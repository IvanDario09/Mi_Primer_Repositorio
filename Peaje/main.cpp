#include "include/Persona.hpp"
#include "include/Peaje.hpp"
#include "include/Vehiculo.hpp"
#include "include/Camion.hpp"
#include "include/Moto.hpp"
#include "include/Coche.hpp"

int main() {
    // Crear un ciudadano
    Ciudadano* ciudadano1 = new Ciudadano("1059242276","Juan", "12/12/1990", "Cali",true);

    // Crear vehículos
    Coche* coche1 = new Coche("Toyota",1);
    *coche1 += ciudadano1;

    cout << coche1->getPlaca() <<endl;
}

//TODO placa valida, (try/catch), menos de 4 caracteres, heredar de excepcion