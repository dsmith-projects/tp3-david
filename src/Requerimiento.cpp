/*
 * Requerimiento.cpp
 *
 *  Created on: Oct 29, 2017
 *      Author: Smith
 */
#include "../include/Requerimiento.h"
#include <string>
#include <stdlib.h>

Requerimiento::Requerimiento()
{
    //ctor
}

Requerimiento::Requerimiento(string id, string tipo, string complejidad, double horasPromedio, bool estado, string descripcion)
:   id(id),
    tipo(tipo),
    complejidad(complejidad),
    horasPromedio(horasPromedio),
    estado(estado),
    descripcion(descripcion)
{

}

Requerimiento::~Requerimiento()
{
    //dtor
}




