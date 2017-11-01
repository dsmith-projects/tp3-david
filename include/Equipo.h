/*
 * Equipo.h
 *
 *  Created on: Oct 28, 2017
 *      Author: Smith
 */

#ifndef INCLUDE_EQUIPO_H_
#define INCLUDE_EQUIPO_H_

#include "../include/Persona.h"
#include <iostream>
#include <sstream>
#include <vector>
#include <string>
#include <stdlib.h>

using namespace std;

class Equipo
{
    public:
        Equipo();
        Equipo(string);
        virtual ~Equipo();

        void agregarPersona(Persona* persona);
        void imprimirMiembros();

        friend ostream& operator<< (ostream&, Equipo);

        string id;
        vector<Persona*> miembros;

    protected:

    private:
};




#endif /* INCLUDE_EQUIPO_H_ */
