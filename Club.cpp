//
// Created by gabri on 29/8/2023.
//

#include "Club.h"
Club::Club(string n):nombre(n){
    this->plantilla= nullptr;
}
Club::~Club(){
if(plantilla!= nullptr){
    delete plantilla;
}
}
 string Club::getNombre(){return nombre ;}
Lista* Club::obtenerPlantilla(){return plantilla;}

void Club::setPlantilla(Lista* l){ plantilla=l;}
void Club::setNombre( string n){nombre=n;}


void Club::MenuDeIngreso(){


    int op; string nombre,posicion;
    Jugador* player;

    Lista* contenedor= new Lista();

do {
    system("cls");
    cout << "---------------" << this->getNombre() << "----------------------" << endl;
    cout << "1) Ingreso de jugadores al equipo: " << endl;
    cout << "2) Mostrar Informacion de los jugadores: " << endl;
    cout << "3) Salir" << endl;
    cin>>op;


    switch (op) {
        case 1:
            system("cls");
            cout<<"Ingrese el nombre del Jugador: "<<endl;
            cin.ignore();
            getline(cin,nombre);

            cout<<"Ingrese la posicion del Jugador: "<<endl;
            cin>>posicion;
            player=new Jugador(nombre,posicion);
            contenedor->agregarJugador(player);
            Club::setPlantilla(contenedor);
            system("pause");
            break;
        case 2:
            system("cls");
            cout << "Mostrando la info de la plantilla: " << endl;
            cout << plantilla->toString() << endl;
            system("pause");
            break;

        case 3:
            break;
        default:
            cout<<"Ingrese una opcion valida: "<<endl;
            break;

    }



}while(op!=3);


}