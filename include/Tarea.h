/*
 * Tarea.h
 *
 *  Created on: Oct 29, 2017
 *      Author: Smith
 */

#ifndef INCLUDE_TAREA_H_
#define INCLUDE_TAREA_H_

#include <string>
#include <stdlib.h>
#include <stdio.h>
#include <vector>
#include "../include/Persona.h"

using namespace std;

class Tarea
{
    public:
        Tarea();
        Tarea(string, string, string, double, bool, string, string, string);
        virtual ~Tarea();

        void agregarRelacionada(Tarea* tarea);
        void agregarDependiente(Tarea* tarea);
        void agregarResponsable(Persona* persona);

        string id;
        string prioridad;
        string impacto;
        Persona* responsable;
        double esfuerzoHoras;
        bool estado;
        vector<Tarea*> relacionada;
        vector<Tarea*> dependiente;
        string descripcion;

    protected:

    private:
};

#endif /* INCLUDE_TAREA_H_ */
