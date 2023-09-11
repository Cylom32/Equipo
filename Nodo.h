//
// Created by gabri on 29/8/2023.
//

#ifndef TAREA_DE_SOCCER_NODO_H
#define TAREA_DE_SOCCER_NODO_H
#include "Jugador.h"

class Nodo {
private:
    Jugador* info;
    Nodo* siguiente;
public:
Nodo();
virtual ~Nodo();


void setInfo(Jugador*);
void setSiguiente(Nodo*);

Jugador* getInfo();
Nodo* getSiguiente();

};


#endif //TAREA_DE_SOCCER_NODO_H
