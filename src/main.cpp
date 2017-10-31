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

vector<Equipo> vectorEquipos;

void crearEquipo() {

	string id;
	cout << "Ingrese el id del equipo: ";
	cin >> id;
	//Equipo e = Equipo(id);
	vectorEquipos.push_back(Equipo(id));
}

void crearMiembro() {
	cout << "TODO > crear miembro" << endl;
}

void crearRequerimiento() {
	cout << "TODO > crear requerimiento" << endl;
}

void crearTarea() {
	cout << "TODO > crear tarea" << endl;
}

void asignarTareaAMiembro() {
	cout << "TODO > asignar tarea a persona" << endl;
}

void mostrarEquipos() {
	vector<Equipo>::iterator iteradorEquipo;

	for(iteradorEquipo = vectorEquipos.begin(); iteradorEquipo != vectorEquipos.end(); ++iteradorEquipo) {
			cout << (*iteradorEquipo).id << endl;
	}
}

void desplegarMenu() {
	cout << "\t*** MENU PRINCIPAL ***\n" << endl;
	cout << "1. Crear un equipo" << endl;
	cout << "2. Crear un miembro" << endl;
	cout << "3. Crear un requerimiento" << endl;
	cout << "4. Crear una tarea" << endl;
	cout << "5. Asignar una tarea a un miembro de un equipo" << endl;
	cout << "6. Mostrar equipos" << endl;
	cout << "7. YYYY" << endl;
	cout << "8. Salir" << endl;
	cout << "\n" << endl;
}

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

	    /* Variables para la ejecucion del menu */
	    	bool salir = false; // Bandera que indica el momento de parada
	    	int opcion = 0; // Entero ingresado por el usuario para la seleccion una escoger una opcion del menu

	    	while (!salir) {

	    		desplegarMenu();
	    		cout << "Ingrese una opcion del menu: ";
	    		cin >> opcion;
	    		cout << "\n" << endl;

	    		switch (opcion) {
				case 1: {
					cout << ">>> CREAR UN NUEVO EQUIPO" << endl;
					crearEquipo();
					break;
				}
				case 2: {
					cout << ">>> CREAR UN NUEVO MIEMBRO" << endl;
					crearMiembro();
					break;
				}
				case 3: {
					cout << ">>> CREAR UN REQUERIMIENTO" << endl;
					crearRequerimiento();
					break;
				}
				case 4: {
					cout << ">>> CREAR UNA NUEVA TAREA" << endl;
					crearTarea();
					break;
				}
				case 5: {
					cout << ">>> ASIGNAR UNA TAREA A UN MIEMBRO DE UN EQUIPO" << endl;
					asignarTareaAMiembro();
					break;
				}
				case 6: {
					cout << ">>> MOSTRAR EQUIPOS " << endl;
					mostrarEquipos();
					break;
				}
				case 7: { // en caso de necesitar más métodos
					cout << "Prueba case 7: " << endl;
					break;
				}
				case 8: {
					salir = true;
					cout << "Usted ha salido del programa\n" << endl;
					break;
				}
				default: {
					cout << "Opcion invalida. Intentelo nuevamente.\n" << endl;
					//break;
				}
	    		}
	    	}

    return 0;
}


