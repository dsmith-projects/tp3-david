/*
 * Persona.cpp
 *
 *  Created on: Oct 28, 2017
 *      Author: Smith
 */


#include "../include/Persona.h"
#include <iostream>

/**
 * Constructor con dos valores por defecto a la hora de crear un nuevo miembro
 */
Persona::Persona()
: cargaMax(0.0),
  cargaActual(0.0),
  tieneEquipo(false)
{

}

/**
 * Constructor que inicializa un nuevo objeto de tipo miembro
 */
Persona::Persona(string id, string nombre, string apellido, double cargaMax)
:   id(id),
    nombre(nombre),
    apellido(apellido),
    cargaMax(cargaMax),
	cargaActual(0.0),
	tieneEquipo(false)
{

}

/**
 * Destructor
 */
Persona::~Persona()
{
    //dtor
}

/**
 * Método que le suma carga al miembro según las nuevas tareas asignadas
 */
void Persona::agregarCargaActual(double carga)
{
    this->cargaActual+=carga;
}

/**
 * Método que inidica si un miembro su asignado a un equipo
 */
void Persona::miembroTieneEquipo() {
	tieneEquipo = true;
}

/**
 * Sobrecarga del operador << para desplegar los datos de un miembro
 */
ostream& operator<< (ostream& salida, Persona persona) {
	salida << "\n   Id: " << persona.id
			<< "\n   Nombre: " << persona.nombre
			 <<"\n   Apellido: "<< persona.apellido
			 <<"\n   Carga Máxima: "<< persona.cargaMax
			 <<"\n   Carga Actual: "<< persona.cargaActual
			 << endl;

	return salida;
}

