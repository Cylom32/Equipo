//
// Created by gabri on 29/8/2023.
//

#ifndef TAREA_DE_SOCCER_CLUB_H
#define TAREA_DE_SOCCER_CLUB_H

#include "Lista.h"
#include "Jugador.h"

class Club {
private:
string nombre;
Lista*plantilla;
public:
    Club(string="Rodneys FC");
    virtual~Club();
    string getNombre();
    Lista* obtenerPlantilla();
    void setPlantilla(Lista*);
    void setNombre(string );

    void MenuDeIngreso();




};


#endif //TAREA_DE_SOCCER_CLUB_H
