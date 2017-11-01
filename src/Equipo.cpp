/*
 * Equipo.cpp
 *
 *  Created on: Oct 28, 2017
 *      Author: Smith
 */

#include "../include/Equipo.h"
#include <stdio.h>
#include <iostream>

using namespace std;

/**
 * Constructor de equipo por defecto
 */
Equipo::Equipo()
{
    //ctor
}

/**
 * Constructor que inicializa un nuevo objeto de tipo equipo recibiendo el id como parámetro
 */
Equipo::Equipo(string id)
:   id(id)
{

}

/**
 * Destructor
 */
Equipo::~Equipo()
{
    //dtor
}

/**
 * Método que agrega un miembro a un equipo
 */
void Equipo::agregarPersona(Persona* persona)
{
    miembros.push_back(persona);
}

/**
 * Método que recorre todos los miembros de un equipo e imprime sus datos
 */
void Equipo::imprimirMiembros()
{
    cout << "\n\n     Equipo: " << this->id << " (Miembros) \n\n";
    vector<Persona*>::iterator iter;

    for(iter = this->miembros.begin(); iter != this->miembros.end(); ++iter)
    {
        cout << "   Id: " << (*iter)->id
                 << "\n   Nombre: " << (*iter)->nombre
				 << "\n   Apellido: "<< (*iter)->apellido
                 << "\n   Carga Maxima: " << (*iter)->cargaMax
                 << "\n   Carga Actual: " << (*iter)->cargaActual
                 << "\n" << endl;
    }
}

/**
 * Sobrecarga del operador << para desplegar los datos de un miembro
 */
ostream& operator<< (ostream& salida, Equipo equipo) {
	salida << "EQUIPO: " << equipo.id << endl;

	vector<Persona*>::iterator iter;

	for(iter = equipo.miembros.begin(); iter != equipo.miembros.end(); ++iter) {
		salida << "\n   Nombre: " << (*iter)->nombre
				 <<"\n   Apellido: "<<(*iter)->apellido
				 <<"\n   Carga Máxima: "<<(*iter)->cargaMax
				 <<"\n   Carga Actual: "<<(*iter)->cargaActual
				 << endl;
	}

	return salida;
}


