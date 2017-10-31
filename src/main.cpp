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
vector<Persona> vectorPersonas;
vector<Requerimiento> vectorRequerimietos;

void crearEquipo() {

	string id;
	cout << "Ingrese el id del equipo: ";
	cin >> id;
	//Equipo e = Equipo(id);
	vectorEquipos.push_back(Equipo(id));
}

void crearMiembro() {
	string idMiembro, nombre, apellido;
	double cargaMax = 0.0;

	cout << "Ingrese el id del miembro: ";
	cin >> idMiembro;
	cout << "Nombre: ";
	cin >> nombre;
	cout << "Apellido: ";
	cin >> apellido;
	cout << "Carga máxima en horas: ";
	cin >> cargaMax;

	vectorPersonas.push_back(Persona(idMiembro, nombre, apellido, cargaMax));
}

void crearRequerimiento() {
	cout << "TODO > crear requerimiento" << endl;
	cout << endl;
}

void crearTarea() {
	cout << "TODO > crear tarea" << endl;
	cout << endl;
}

void asignarMiembroAEquipo() {
	string idMiembro, idEquipo;
	bool miembroExiste = false;
	bool equipoExiste = false;
	vector<Persona>::iterator itPersona;
	vector<Equipo>::iterator itEquipo;

	do{
		cout << "Ingrese el id del miembro: " << endl;
		cin >> idMiembro;

		for(itPersona = vectorPersonas.begin(); itPersona != vectorPersonas.end(); ++itPersona){
			if ((*itPersona).id == idMiembro) {
				miembroExiste = true;
				break;
			}
		}

		if(!miembroExiste){
			cout << "No existe un miembro con ese id. Intente de nuevo" << endl;
		}
	}while(!miembroExiste);

	do{
		cout << "Ingrese el id del miembro: " << endl;
		cin >> idEquipo;

		for(itEquipo = vectorEquipos.begin(); itEquipo != vectorEquipos.end(); ++itEquipo){
			if ((*itEquipo).id == idEquipo) {
				equipoExiste = true;
				break;
			}
		}

		if(!equipoExiste){
			cout << "No existe un equipo con ese id. Intente de nuevo" << endl;
		}
	}while(!equipoExiste);


	cout << endl;
}

void asignarTareaAMiembro() {
	cout << "TODO > asignar tarea a persona" << endl;
	cout << endl;
}

void mostrarEquipos() {
	vector<Equipo>::iterator iteradorEquipo;

	for(iteradorEquipo = vectorEquipos.begin(); iteradorEquipo != vectorEquipos.end(); ++iteradorEquipo) {
		cout << (*iteradorEquipo).id << endl;
	}
}

void mostrarMiembros() {
	vector<Persona>::iterator iteradorPersona;

	cout << ">>> LISTADO DE MIEMBROS:\n" << endl;
	for(iteradorPersona = vectorPersonas.begin(); iteradorPersona != vectorPersonas.end(); ++iteradorPersona) {
		cout << "Id del miembro: " << (*iteradorPersona).id << endl;
		cout << "Nombre: " << (*iteradorPersona).nombre << endl;
		cout << "Apellido: " << (*iteradorPersona).apellido << endl;
		cout << "Carga máxima: " << (*iteradorPersona).cargaMax << endl;
		cout << "Carga actual: " << (*iteradorPersona).cargaActual << endl;
		cout << endl;
	}
}

void mostrarRequerimientos() {
	cout << "TODO > asignar tarea a persona" << endl;
	cout << endl;
}

void mostrarTareas() {
	cout << "TODO > asignar tarea a persona" << endl;
	cout << endl;
}

void desplegarMenu() {
	cout << "\t*** MENU PRINCIPAL ***\n" << endl;
	cout << "1. Crear un equipo" << endl;
	cout << "2. Crear un miembro" << endl;
	cout << "3. Crear un requerimiento" << endl;
	cout << "4. Crear una tarea" << endl;
	cout << "5. Asignar miembro a un equipo" << endl;
	cout << "6. Asignar una tarea a un miembro de un equipo" << endl;
	cout << "7. Mostrar equipos" << endl;
	cout << "8. Mostrar miembros" << endl;
	cout << "9. Mostrar requerimientos" << endl;
	cout << "10. Mostrar tareas" << endl;
	cout << "11. Salir" << endl;
	cout << "\n" << endl;
}

int main()
{
//	    e.agregarPersona(&p);
//	    e.agregarPersona(&p2);
//	    e.agregarPersona(&p3);

//	    e.imprimirMiembros();
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
	    		cout << endl;

	    		switch (opcion) {
				case 1: {
					cout << ">>> CREAR UN NUEVO EQUIPO\n" << endl;
					crearEquipo();
					cout << endl;
					break;
				}
				case 2: {
					cout << ">>> CREAR UN NUEVO MIEMBRO\n" << endl;
					crearMiembro();
					cout << endl;
					break;
				}
				case 3: {
					cout << ">>> CREAR UN REQUERIMIENTO\n" << endl;
					crearRequerimiento();
					cout << endl;
					break;
				}
				case 4: {
					cout << ">>> CREAR UNA NUEVA TAREA\n" << endl;
					crearTarea();
					cout << endl;
					break;
				}
				case 5: {
					cout << ">>> ASIGNAR UN MIEMBRO A UN EQUIPO\n" << endl;
					asignarMiembroAEquipo();
					cout << endl;
					break;
				}
				case 6: {
					cout << ">>> ASIGNAR UNA TAREA A UN MIEMBRO DE UN EQUIPO\n" << endl;
					asignarTareaAMiembro();
					cout << endl;
					break;
				}
				case 7: {
					cout << ">>> MOSTRAR EQUIPOS\n" << endl;
					mostrarEquipos();
					cout << endl;
					break;
				}
				case 8: {
					cout << ">>> MOSTRAR MIEMBROS\n" << endl;
					mostrarMiembros();
					cout << endl;
					break;
				}
				case 9: {
					cout << ">>> MOSTRAR REQUERIMIENTOS\n" << endl;
					mostrarRequerimientos();
					cout << endl;
					break;
				}
				case 10: {
					cout << ">>> MOSTRAR TAREAS\n" << endl;
					mostrarTareas();
					cout << endl;
					break;
				}
				case 12: { // en caso de necesitar más métodos
					cout << "Prueba case 7: \n" << endl;
					cout << endl;
					break;
				}
				case 11: {
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


