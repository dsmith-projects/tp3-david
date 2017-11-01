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
    cargaMax(cargaMax),
	cargaActual(0.0),
	tieneEquipo(false)
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

void Persona::miembroTieneEquipo() {
	tieneEquipo = true;
}

ostream& operator<< (ostream& salida, Persona persona) {
	salida << "\n   Id: " << persona.id
			<< "\n   Nombre: " << persona.nombre
			 <<"\n   Apellido: "<< persona.apellido
			 <<"\n   Carga Máxima: "<< persona.cargaMax
			 <<"\n   Carga Actual: "<< persona.cargaActual
			 << endl;

	return salida;
}

