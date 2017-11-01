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
#include <algorithm>

using namespace std;

/*! Variables globales para guardar equipos, personas y requerimientos  */
vector<Equipo> vectorEquipos;
vector<Persona> vectorPersonas;
vector<Requerimiento> vectorRequerimietos;

/**
 * Método que crea un equipo nuevo y lo agrega al vector de equipos
 */
void crearEquipo() {
	/*! Variables para almacenar los datos del equipo nuevo  */
	string id;
	cout << "Ingrese el id del equipo: ";
	cin >> id;

	vectorEquipos.push_back(Equipo(id));
}

/**
 * Método que crea un miembro nuevo y lo agrega al vector de miembro
 */
int crearMiembro() {
	/*! Variables para almacenar los datos del nuevo miembro */
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

	/*! Se agrega el miembro al vector */
	Persona p = Persona(idMiembro, nombre, apellido, cargaMax);
	vectorPersonas.push_back(p);

	/*! Variables para decidir si se agrega el miembro al equipo  */
	bool ingresoCorrecto = true;
	int opcion = 2;

	/*! Condición y ciclo para decidir si se agrega el miembro al equipo  */
	if (!vectorEquipos.empty()) {
		do {
			cout << "¿Desea agregar el miembro a un equipo? 1. sí / 2. no ";
			cin >> opcion;
			if(opcion != 1 && opcion != 2) {
				ingresoCorrecto = false;
				cout << "\bEntrada incorrecta. Intente de nuevo: " << endl;
			} else {
				return opcion;
			}
		}while(!ingresoCorrecto);
	} else {
		cout << "No hay equipos, por lo que el miembro no se puede agregar a ningún equipo" << endl;
	}
	return opcion;
}

/**
 * crear requerimiento
 */
void crearRequerimiento() {
	cout << "TODO > crear requerimiento" << endl;
	cout << endl;
}

/**
 * crear tarea
 */
void crearTarea() {
	cout << "TODO > crear tarea" << endl;
	cout << endl;
}

/**
 * Método que verifica que el miembro y equipo existan y de ser así agrega el miembro al vector de miembros del equipo
 */
void asignarMiembroAEquipo() {
	/*! Variables e iteradores para agregar miembro a equipo */
	string idMiembro, idEquipo;
	bool miembroExiste = false;
	bool equipoExiste = false;
	vector<Persona>::iterator itPersona;
	vector<Equipo>::iterator itEquipo;
	Persona *p;

	/*! Método que solicita el id del miembro y verfifica que exista.  */
	do{
		cout << "Ingrese el id del miembro: " << endl;
		cin >> idMiembro;

		for(itPersona = vectorPersonas.begin(); itPersona != vectorPersonas.end(); ++itPersona){

			if ((*itPersona).id == idMiembro) {
				p = &(*itPersona);
				miembroExiste = true;
				break;
			}
		}

		if(!miembroExiste){
			cout << "No existe un miembro con ese id. Intente de nuevo" << endl;
		}
	}while(!miembroExiste);

	/*! Método que solicita el id del equipo y verfifica que exista. Luego agrega el miembro a ese equipo */
	do{
		cout << "Ingrese el id del equipo: " << endl;
		cin >> idEquipo;

		for(itEquipo = vectorEquipos.begin(); itEquipo != vectorEquipos.end(); ++itEquipo){
			if ((*itEquipo).id == idEquipo) {
				equipoExiste = true;
				(*itEquipo).agregarPersona(p);
				cout << ">>> El miembro fue agregado correctamente al equipo.\n" << endl;
				p->miembroTieneEquipo();
				break;
			}
		}

		if(!equipoExiste){
			cout << "No existe un equipo con ese id. Intente de nuevo" << endl;
		}
	}while(!equipoExiste);


	cout << endl;
}

/**
 * ... text ...
 */
void asignarTareaAMiembro() {
	cout << "TODO > asignar tarea a persona" << endl;
	cout << endl;
}

/**
 * Método que despliega los equipos. Usa un iterador para recorrer el vector
 */
void mostrarEquipos() {
	vector<Equipo>::iterator iteradorEquipo;

	for(iteradorEquipo = vectorEquipos.begin(); iteradorEquipo != vectorEquipos.end(); ++iteradorEquipo) {
		//cout << ">>> Id del equipo: " << (*iteradorEquipo).id << endl;
		cout << (*iteradorEquipo) << endl;
	}
}

/**
 * Muestra el sub menú que se despliega con la opción 8 del menú. Da opciones para visualizar los miembros creados
 */
int mostrarSubmenu() {
	int opcion = 1;
	bool ingresoCorrecto = true;
	cout << "\nSeleccione una opción:\n" << endl;
	cout << "1. Mostrar todos los miembros sin indicar el equipo al que pertenece" << endl;
	cout << "2. Mostrar todos los miembros por equipo" << endl;
	cout << "3. Mostrar solo los miembros de un equipo. Debe ingresar el id del equipo" << endl;
	cout << "4. Mostrar solo los miembros que no pertenecen a ningún equipo" << endl;

	do {
		cout << "Opción: " << endl;
		cin >> opcion;
		if(opcion != 1 && opcion != 2 && opcion != 3 && opcion != 4) {
			ingresoCorrecto = false;
			cout << "\bEntrada incorrecta. Intente de nuevo: " << endl;
		}
	} while(!ingresoCorrecto);

	return opcion;
}

/**
 * Muestra todos los miembros registrados en el sistema
 */
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

/**
 * Muestra los miembros con desglose por equipo al que pertenece cada miembro
 */
void mostrarMiembrosPorEquipo() {
	string idEquipo;
	bool equipoExiste = false;
	vector<Equipo>::iterator itEquipo;

	do{
		cout << "Ingrese el id del equipo: " << endl;
		cin >> idEquipo;

		for(itEquipo = vectorEquipos.begin(); itEquipo != vectorEquipos.end(); ++itEquipo){
			if ((*itEquipo).id == idEquipo) {
				equipoExiste = true;
				(*itEquipo).imprimirMiembros();
				break;
			}
		}

		if(!equipoExiste){
			cout << "No existe un equipo con ese id. Intente de nuevo" << endl;
		}
	}while(!equipoExiste);
}

/**
 * Muestra los miembros que han sido creados pero no perteneces a ningún equipo
 */
void mostrarMiembrosSinEquipo() {
	vector<Persona>::iterator iteradorPersona;

	for(iteradorPersona = vectorPersonas.begin(); iteradorPersona != vectorPersonas.end(); ++iteradorPersona) {
		if(!(*iteradorPersona).tieneEquipo) {
			cout << (*iteradorPersona) << endl;
		}
		cout << endl;
	}
}

/**
 * ... text ...
 */
void mostrarRequerimientos() {
	cout << "TODO > asignar tarea a persona" << endl;
	cout << endl;
}

/**
 * ... text ...
 */
void mostrarTareas() {
	cout << "TODO > asignar tarea a persona" << endl;
	cout << endl;
}

/**
 * Plantilla que ordena los miembros por nombre
 */
template<class T, class V>
bool ordernarMiembrosPorNombre(const T& obj1, const V& obj2) {
	return obj1.nombre < obj2.nombre;
}

/**
 * Plantilla que ordena los miembros por apellido
 */
template<class T, class V>
bool ordernarMiembrosPorApellido(const T& obj1, const V& obj2) {
	return obj1.apellido < obj2.apellido;
}

/**
 * Plantilla que ordena los miembros por carga máxima
 */
template<class T, class V>
bool ordernarMiembrosPorCargaMax(const T& obj1, const V& obj2) {
	return obj1.cargaMax < obj2.cargaMax;
}

/**
 * Plantilla que ordena los miembros por carga actual
 */
template<class T, class V>
bool ordernarMiembrosPorCargaActual(const T& obj1, const V& obj2) {
	return obj1.cargaActual < obj2.cargaActual;
}

/**
 * Despliega el menú principal de la aplicación que muestra todas las opciones del programa
 */
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
	cout << "11. Ordenar miembros por nombre" << endl;
	cout << "12. Ordenar miembros por apellido" << endl;
	cout << "13. Ordenar miembros por carga máxima" << endl;
	cout << "14. Ordenar miembros por carga actual" << endl;
	cout << "15. Salir" << endl;
	cout << "\n" << endl;
}

/**
 * Método main. Punto de partida del programa. Muestra el menú y permite al usuario escoger diferentes opciones
 */
int main()
{
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
					int numOp = crearMiembro();
					if(numOp == 1) {
						asignarMiembroAEquipo();
					}
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
					int submenu = mostrarSubmenu();
					if(submenu == 1){
						mostrarMiembros();
					}
					if(submenu == 2){
						mostrarEquipos();
					}
					if(submenu == 3){
						mostrarMiembrosPorEquipo();
					}
					if(submenu == 4){
						mostrarMiembrosSinEquipo();
					}
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
				case 11: {
					cout << ">>> ORDENAR MIEMBROS POR NOMBRE\n" << endl;
					sort(vectorPersonas.begin(), vectorPersonas.end(), ordernarMiembrosPorNombre<Persona,Persona>);
					cout << endl;
					break;
				}
				case 12: {
					cout << ">>> ORDENAR MIEMBROS POR APELLIDO\n" << endl;
					sort(vectorPersonas.begin(), vectorPersonas.end(), ordernarMiembrosPorApellido<Persona,Persona>);
					cout << endl;
					break;
				}
				case 13: {
					cout << ">>> ORDENAR MIEMBROS POR CARGA MÁXIMA\n" << endl;
					sort(vectorPersonas.begin(), vectorPersonas.end(), ordernarMiembrosPorCargaMax<Persona,Persona>);
					cout << endl;
					break;
				}
				case 14: {
					cout << ">>> ORDENAR MIEMBROS POR CARGA ACTUAL\n" << endl;
					sort(vectorPersonas.begin(), vectorPersonas.end(), ordernarMiembrosPorCargaActual<Persona,Persona>);
					cout << endl;
					break;
				}
				case 15: {
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


