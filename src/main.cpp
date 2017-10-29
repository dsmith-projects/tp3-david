/*
 * main.cpp
 *
 *  Created on: Oct 28, 2017
 *      Author: Smith
 */

#include "../include/Tarea.h"
#include "../include/Requerimiento.h"
#include "../include/Persona.h"
#include "../include/Equipo.h"
#include <iostream>
#include <vector>
#include <iostream>
#include <string>

using namespace std;

int main()
{
	//    vector<Equipo> vecquipo;
	//    vector<Requerimiento> vecrequerimieto;
	    string id;

	    std::cout<<"\tCREAR EQUIPO\n\n";
	    std::cout<<"Id:";
	    //std::cin>>id;

	    Equipo e = Equipo("e1");

	    std::cout<<"\n\nId: "<<e.id;

	    string nombre, apellido;
	    double cargaMax=0.0;
	    std::cout<<"\tCREAR PERSONA\n\n";
	    /*std::cout<<"Id: "; std::cin>>id;
	    std::cout<<"Nombre: "; std::cin>>id;
	    std::cout<<"Apellido: "; std::cin>>id;*/


	    Persona p = Persona("id1", "nombre1", "apellido1", 85.2);
	    std::cout<<"\n\nCarga : "<<p.cargaActual<<std::endl;
	    p.agregarCargaActual(20);
	    std::cout<<"\n\nCarga : "<<p.cargaActual<<std::endl;
	    p.agregarCargaActual(5.2);
	    std::cout<<"\n\nCarga : "<<p.cargaActual<<std::endl;

	    Persona p2 = Persona("id2", "nombre2", "apellido2", 4.2);
	    Persona p3 = Persona("id3", "nombre3", "apellido3", 85.2);
	    e.agregarPersona(&p);
	    e.agregarPersona(&p2);
	    e.agregarPersona(&p3);

	    e.imprimirMiembros();
	//    std::cout<<"\n miembros "<<&e.miembros;
	//    std::cout<<e.miembros[0]->nombre;
	//    std::cout<<"\n miembros[0]"<<&e.miembros[0];

    return 0;
}


