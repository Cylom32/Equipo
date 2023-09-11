//
// Created by gabri on 29/8/2023.
//

#include "Lista.h"
Lista::Lista(){
    this->inicio= nullptr;
    this->final= nullptr;
}



Lista::~Lista(){
    Nodo* actual=inicio;
    while(actual!= nullptr){
        Nodo*siguiente=actual->getSiguiente();
        delete actual;
        actual=siguiente;
    }
inicio= nullptr;
    final= nullptr;
}

void Lista::agregarJugador(Jugador* pla){
 Nodo* nuevo=new Nodo();
 nuevo->setInfo(pla);


 //Si la lista esta vacia sera el inicio como el final de la lista
 if(inicio== nullptr){
     inicio=nuevo;
     final=nuevo;
 }else{
     final->setSiguiente(nuevo);
     final=nuevo;
 }

}
string Lista::toString(){
   stringstream s;
    Nodo* actual=inicio;
    while(actual!= nullptr){
      s<<actual->getInfo()->toString();
        actual=actual->getSiguiente();
    }
    return s.str();
}

bool Lista::buscarNumeroCedula(string id){

    Nodo* actual=inicio;
    while(actual!= nullptr){
        if(actual->getInfo()->getNombre()==id){
           cout<<"El jugador se encuentra en nuestra base plantilla"<<endl;
            return true;
        }
        actual=actual->getSiguiente();
    }

    cout<<"No hay jugadores en nuestra plantilla"<<endl;
    return false;

}
