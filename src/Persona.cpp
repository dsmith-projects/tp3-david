/*
 * Persona.cpp
 *
 *  Created on: Oct 28, 2017
 *      Author: Smith
 */


#include "../include/Persona.h"
#include <iostream>

Persona::Persona()
{
    //ctor
}

Persona::Persona(string id, string nombre, string apellido, double cargaMax)
:   id(id),
    nombre(nombre),
    apellido(apellido),
    cargaMax(cargaMax)
{

}
Persona::~Persona()
{
    //dtor
}

void Persona::agregarCargaActual(double carga)
{
    this->cargaActual+=carga;
}

