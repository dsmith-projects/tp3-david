/*
 * Persona.h
 *
 *  Created on: Oct 28, 2017
 *      Author: Smith
 */

#ifndef INCLUDE_PERSONA_H_
#define INCLUDE_PERSONA_H_

#include <iostream>
#include <sstream>
#include <string>
#include <stdlib.h>

using namespace std;

class Persona
{
    public:
        Persona();
        Persona(string, string, string, double);
        virtual ~Persona();

        void agregarCargaActual(double);

        string id;
        string nombre;
        string apellido;
        double cargaMax=0.0;
        double cargaActual=0.0;

    protected:

    private:
};

#endif /* INCLUDE_PERSONA_H_ */
