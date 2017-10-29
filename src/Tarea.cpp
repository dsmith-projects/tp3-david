/*
 * Tarea.cpp
 *
 *  Created on: Oct 29, 2017
 *      Author: Smith
 */
#include "../include/Tarea.h"
#include <string>
#include <stdlib.h>
#include <vector>

Tarea::Tarea()
{
    //ctor
}

Tarea::Tarea(string id, string prioridad, string impacto, double esfuerzoHoras, bool estado, string idrelacionada, string iddependiente, string descripcion)
:  id(id),
   prioridad(prioridad),
   impacto(impacto),
   esfuerzoHoras(esfuerzoHoras),
   estado(estado),
   descripcion(descripcion)
{
}

Tarea::~Tarea()
{
    //dtor
}

void Tarea::agregarRelacionada(Tarea* tarea)
{
    this->relacionada.push_back(tarea);
}

void Tarea::agregarDependiente(Tarea* tarea)
{
    this->dependiente.push_back(tarea);
}

void Tarea::agregarResponsable(Persona* persona)
{
    this->responsable=persona;
}

