# tp3-david

Equipo

Mostrar todas las tareas de las persona de un equipo. El usuario da/escoge el id del equipo
Mostrar todas las tareas de las persona de un equipo. El usuario da/escoge el id del equipo

Persona

Crear un constructor que 


Menú Principal

Crear un menú con las siguientes opciones

(#1) -Crear equipo 
(#2) -Crear miembro 
	Después de creado, preguntar si desea agregarlo a algún equipo
(#3) -Crear requerimiento 
	-preguntar si desea crearle una tarea al requerimiento
(#4) -Crear tarea 
	-preguntar a cuál requerimiento está relacionada, digitar el id del requerimiento
	-pedir todos los datos de una tarea
	Después de creada:
	-preguntar si está relacionada con otra u otras tareas. Mostrar tareas y escoger una. Repetir hasta que el usuario lo desee
	-preguntar si es dependiente de otra u otras tareas. Mostrar tareas y escoger una. Repetir hasta que el usuario lo desee
	-preguntar si desea asignarla a una persona

(#5) -Asignar un miembro a un equipo
(#6) -Asignar tareas a usuarios: muestra todas las tareas, el usuario escoge una. Muestra todos los miembros, el usuario escoge una y la asigna 

(#7) -Mostrar equipos 
	-Listar todos los equipos creados en el sistema > mostrar el número de miembros???
(#8) -Mostrar miembros:	preguntar si desea mostrar:
	-todos los miembros de todos los equipos > mostrar al lado o en paréntesis el equipo al que pertenece
	-solo los miembros según el id del equipo
	-los miembros que no tienen equipo
	
(#9) -Mostrar requerimientos 
(#10) -Mostrar tareas 

Requerimiento

Métodos :
Crear un nuevo requerimiento. Solicitar datos:
	-id
	-tipo
	-complejidad
	-horas promedio
	-estado
	-descripción
Asignar tarea a este requerimiento: agregarTarea()
Listar tareas de ese requerimiento: mostrarTareas()
Mostrar estado de requerimiento: getEstado()
Mostrar datos del requerimiento: mostrarRequerimiento()	
	Muestra:
	-id
	-tipo
	-complejidad
	-horas promedio
	-estado
	-descripción

Tarea

Crear nueva tarea. Solicitar datos:
	-id
	-prioridad
	-impacto
	-esfuerzo - horas
	-estado
Asignar un responsable a la tarea
Asociar tareas relacionadas
Asocias tareas dependientes
Mostrar tarea
