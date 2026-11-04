#include "cabecera/Ciudadano.hpp"
#include "cabecera/Peaje.hpp"
#include "cabecera/Vehiculo.hpp"
#include "cabecera/Camion.hpp"
#include "cabecera/Moto.hpp"
#include "cabecera/Coche.hpp"

int main() {
    // Crear un ciudadano
    Ciudadano* ciudadano1 = new Ciudadano("1059242276","Juan", "12/12/1990", "Cali",true);

    // Crear vehículos
    Coche* coche1 = new Coche("Toyota","ABC123","Corolla");
    Moto* moto1 = new Moto("Honda","XYZ789", "CBR500R", 500);
    Camion* camion1 = new Camion( "Volvo","DEF456", "VNL", 3);

    *coche1 += ciudadano1;
}

//TODO placa valida, (try/catch), menos de 4 caracteres, heredar de excepcion