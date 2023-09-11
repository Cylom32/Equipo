//
// Created by gabri on 29/8/2023.
//

#ifndef TAREA_DE_SOCCER_JUGADOR_H
#define TAREA_DE_SOCCER_JUGADOR_H

#include <iostream>
#include <sstream>

using namespace std;
class Jugador {

private:
    string nombre;
    string posicion;
public:
    Jugador();
    Jugador(const string &nombre, const string &posicion);

    virtual ~Jugador();

    const string &getNombre() const;

    void setNombre(const string &nombre);

    const string &getPosicion() const;

    void setPosicion(const string &posicion);


    string toString();
};


#endif //TAREA_DE_SOCCER_JUGADOR_H
