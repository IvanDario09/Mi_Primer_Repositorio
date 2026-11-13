#include "Persona.hpp"
#include "Caseta.hpp"
#include "Registro.hpp"
#include "Coche.hpp"
#include "Moto.hpp"
#include "Camion.hpp"
#include "Bus.hpp"
#include "Propietario.hpp"
#include "Operador.hpp"
#include "Exceptions.hpp"

int main() {
    //Requisitos para los casos;
    vector<Persona*> humanidad;
    vector<Vehiculo*> vehiculos;
    Caseta* miCaseta= new Caseta();

    cout << "===================================="<<endl;
    Operador* op= new Operador("2525","1059242276","Jimmy","25/04/2009");
    cout << op->descripcionPersona()<<endl;
    humanidad.push_back(op);
    cout<<"========================================"<<endl;
    Propietario* pVec= new Propietario("1080900112","Carlos","19/03/2002",1);
    cout << pVec->descripcionPersona()<<endl;
    humanidad.push_back(pVec);
    cout<<"========================================"<<endl;
    Propietario* pNoVec= new Propietario("2529222222","Maria","03/15/2004",0);
    cout << pNoVec->descripcionPersona()<<endl;
    humanidad.push_back(pNoVec);
    cout << "======================================"<<endl;

    Coche* coche= new Coche("ABC123",3);
    vehiculos.push_back(coche);
    Moto* moto= new Moto("XYZ45A", 125);
    vehiculos.push_back(moto);
    Bus* bus = new Bus("BUS777",38);
    vehiculos.push_back(bus);
    Camion* camion= new Camion("CAM301",3);
    vehiculos.push_back(camion);

    miCaseta->asignarOperador(op);

    //CASO 1
    cout<<"==================CASO 1================="<<endl;
    coche->asignarPropietario(pNoVec);
    cout << *coche;
    cout << "Tarifa: "<< coche->calcTarifa()<<endl;
    cout<<"========================================"<<endl;

    //CASO 2
    cout<<"==================CASO 2================="<<endl;
    coche->asignarPropietario(pVec);
    cout << *coche;
    miCaseta->cobrarPeaje(coche); //para el caso 10
    vehiculos.push_back(coche);
    cout << miCaseta->getRegistro()[0]->info()<<endl;
    cout<<"========================================"<<endl;

    //CASO 3
    cout<<"==================CASO 3================="<<endl;
    moto->asignarPropietario(pVec);
    cout << *moto;
    miCaseta->cobrarPeaje(moto);
    vehiculos.push_back(moto);
    cout << miCaseta->getRegistro()[1]->info()<<endl;
    cout<<"========================================"<<endl;

    //CASO 4
    cout<<"==================CASO 4================="<<endl;
    moto->asignarPropietario(nullptr);
    moto->setPlaca("MOT650");
    moto->setCilindraje(650);
    cout << *moto;
    vehiculos.push_back(moto);
    cout << "Tarifa: "<< moto->calcTarifa()<<endl;
    cout<<"========================================"<<endl;
    
    //CASO 5
    cout<<"==================CASO 5================="<<endl;
    bus->asignarPropietario(pVec);
    cout << *bus;
    miCaseta->cobrarPeaje(bus);
    vehiculos.push_back(bus);
    cout<< miCaseta->getRegistro()[2]->info()<<endl;
    cout<<"========================================"<<endl;

    //CASO 6
    cout<<"==================CASO 6================="<<endl;
    cout << *camion;
    cout << "Tarifa: "<< camion->calcTarifa()<<endl;
    cout<<"========================================"<<endl;

    //CASO 7
    cout<<"==================CASO 7================="<<endl;
    camion->setEjes(4);
    cout << *camion;
    miCaseta->cobrarPeaje(camion);
    cout << miCaseta->getRegistro()[3]->info()<<endl;
    cout<<"========================================"<<endl;

    //CASO 8
    cout<<"==================CASO 8================="<<endl;
    coche->setPlaca("");
    Coche* cocheError=new Coche("",2);
    cout<<"========================================"<<endl;

    //CASO 9
    cout<<"==================CASO 9================="<<endl;
    camion->setEjes(1);
    cout<<"========================================"<<endl;

    //CASO 10
    cout<<"==================CASO 10================="<<endl;
    cout << "Total tarifa: "<< miCaseta->getTotalRegistrado()<<endl;
    cout << miCaseta->infoCategoriasRegistradas()<<endl;
    cout<<"========================================"<<endl;

    //CASO 11/12 (opcional)
    cout<<"==================CASO 11================="<<endl;
    int monto,dif;
    int total = miCaseta->getTotalRegistrado();
    cout <<"Operador "<<op->getNombre()<<" digite el monto del dia: ";
    cin >> monto;
    try{
        if(monto < total){dif=total-monto;
            throw ExcepcionDescuadreCaja("El monto es incorrecto, han faltado " + to_string(dif));}
        if(monto > total){dif=monto-total;
            throw ExcepcionDescuadreCaja("El monto es incorrecto, se excede por " + to_string(dif));}
    }catch(const exception& e){cout << "Error: "<<e.what()<<endl;}
    cout << "El monto es correcto"<<endl;
    cout<<"========================================"<<endl;

    //CASO 13(opcional)
    cout << "FINALIZANDO PROGRAMA"<<endl;

    //librerando memoria empezando por caseta, luego vehiculos a traves de vehiculo* y finalmente personas
    delete miCaseta;
    for(Vehiculo* v: vehiculos){delete v;}
    for(Persona* h: humanidad){delete h;}
    vehiculos.clear();
    humanidad.clear();
}