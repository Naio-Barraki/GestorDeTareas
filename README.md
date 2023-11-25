# GestorDeTareas
ProyectoModularPE

Requisitos para ejecutar:
-Windows
-Compilador GCC
-IDE (*Recomendado)
-Computadora sin muchos programas ejecutandose al mismo tiempo/bloatware (*Reacomendado)

Estructura de tarea:
Nombre: Contiene el nombre de la tarea
Estado: Contiene el estado de la tarea (Pendiente o Completado)
ID: Indice de la tarea

Las tareas se almacenan en un arreglo de 10 tareas, el usuario no puede agregar mas de 10 tareas,
las tareas se ordenan de 0 a 9.

Manual de usuario:
El programa despliega el menu y pide al usuario ingresar una opcion, de ser una opcion
no valida el programa informa al usuario y cada vez que se termine de ejecutar una opcion
el programa se cicla hasta que se elija la opcion "salir"; las opciones se elijen con
numeros enteros y estas son:

1.- Añadir Nueva Tarea:
  El programa analiza si todavia no se han acabado los espacion de tareas el programa permite
  añadir una tarea mas, de no haber espacio el programa no permite al usuario ingresar nuevas
  tareas, en caso de querer añadir una tarea nueva entonces es necesario salir y volver a 
  ejecutar el programa. 
  Al añadir una nueva tarea el programa pide un nombre al usuario, consecuentemente el usuario
  ingresa el estado de la tarea (0 Pendiente & 1 Completada), en caso de ingresar una opcion no
  valida el programa sigue repitiendo la instruccion hasta ser una opcion valida, para finalizar
  la tarea guarda el indice de la tarea para futuras busquedas.

2.- Modificar Tareas como Completadas:
  El programa checa si hay tareas existentes, de no tener tareas el programa sale de la funcion
  en caso de tener tareas el programa imprime las tareas pendientes y pide al usuario que ingrese
  el indice de una tarea pendiente:
    +En caso de ingresar una tarea pendiente, el programa modifica el estado de la tarea a tarea
     completada e informa al usuaio que la funcion se ejecuto correctamente.
    +En caso de ingresar una tarea completada, el programa no modifica nada e informa al usuario
     que la tarea ya estaba completada con anterioridad.
    +En caso de no existir el indice de la tarea a buscar la funcion notifica de error y se retorna
     al programa principal.

3.- Mostrar Tareas Pendientes:
  El programa checa si hay tareas existentes, de no tener tareas el programa sale de la funcion
  en caso de tener tareas el programa imprime las tareas pendientes, en caso de no imprimir tareas
  se felicita al usuario por no tener tareas pendientes.

4.- Mostrar todas las tareas:
  El programa checa si hay tareas existentes, de no tener tareas el programa sale de la funcion
  en caso de tener tareas el programa imprime todas las tareas con todos los datos de la estructura.

5.- Buscar: (Pre-Busqueda)
  El programa checa si hay tareas existentes, de no tener tareas el programa sale de la funcion
  en caso de tener tareas el programa pide al usuario que ingrese el nombre de la tarea a buscar
  y lo pasa al metodo "buscar".

  (Buscar)
  El programa compara el nombre a buscar con el nombre de la tarea en el indice actual:
    +En caso de coincidir ambos nombres entonces imprime los datos de la tarea y retorna
    +En caso de acabarse las tareas, el programa notifica de no existir dicha tarea y retorna
    +En caso de no cumplirse ninguna de las anteriores se llama recursivamente a la funcion con
     la unica diferencia que el indice incrementa en 1 para pasar a la siguiente tarea.

6.- Salir:
  El programa imprime un texto de salir y consecuentemente sale del programa.

Como utilizar el programa:
Descargue los archivos y modifique el archivo .depend con la direccion de los archivos en su programa,
o implemente la libreria.h de manera manual en su compilador de preferencia, para ejecutar el programa
compile y ejecute en el IDE. En caso de no saber como solo abra el archivo .c y copie/pegue el codigo en
un nuevo proyecto en un compilador al igual que crear un archivo .h para copiar/pegar el codigo al igual
que hizo en el archivo .c.
