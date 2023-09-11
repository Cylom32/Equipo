//
// Created by gabri on 29/8/2023.
//

#ifndef TAREA_DE_SOCCER_LISTA_H
#define TAREA_DE_SOCCER_LISTA_H

#include "Nodo.h"
class Lista {
private:
    Nodo* inicio;
    Nodo* final;
public:
    Lista();
    virtual ~Lista();

    void agregarJugador(Jugador*);
    string toString();

    bool buscarNumeroCedula(string id);

};


#endif //TAREA_DE_SOCCER_LISTA_H
