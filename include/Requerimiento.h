/*
 * Requerimiento.h
 *
 *  Created on: Oct 29, 2017
 *      Author: Smith
 */

#ifndef INCLUDE_REQUERIMIENTO_H_
#define INCLUDE_REQUERIMIENTO_H_

#include <string>
#include <stdlib.h>

using namespace std;

class Requerimiento
{
    public:
        Requerimiento();
        Requerimiento(string, string, string, double, bool, string);
        virtual ~Requerimiento();

        string id;
        string tipo;
        string complejidad;
        double horasPromedio;
        bool estado;
        string descripcion;

    protected:

    private:
};

#endif /* INCLUDE_REQUERIMIENTO_H_ */
