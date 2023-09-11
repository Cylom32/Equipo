//
// Created by gabri on 29/8/2023.
//

#include "Jugador.h"
Jugador::Jugador(){}
Jugador::Jugador(const string &nombre, const string &posicion) : nombre(nombre), posicion(posicion) {}

Jugador::~Jugador() {

}

const string &Jugador::getNombre() const {
    return nombre;
}

void Jugador::setNombre(const string &nombre) {
    Jugador::nombre = nombre;
}

const string &Jugador::getPosicion() const {
    return posicion;
}

void Jugador::setPosicion(const string &posicion) {
    Jugador::posicion = posicion;
}

string Jugador::toString(){
    stringstream s;
    s<<" Nombre del jugador: "<<nombre<<endl;
    s<<" Posicion del jugador: "<<posicion<<endl;
    s<<"---------------------------------"<<endl;
    return s.str();
}