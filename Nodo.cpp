//
// Created by gabri on 29/8/2023.
//

#include "Nodo.h"
Nodo::Nodo(){
    this->info= nullptr;
    this->siguiente= nullptr;

}
Nodo::~Nodo(){
    if(info!= nullptr){
        delete info;
    }
}


void Nodo::setInfo(Jugador* x){this->info=x;}
void Nodo::setSiguiente(Nodo* x){this->siguiente=x;}

Jugador* Nodo::getInfo(){return info;}
Nodo* Nodo::getSiguiente(){return siguiente;}
