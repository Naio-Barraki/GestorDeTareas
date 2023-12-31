#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include "librerias.h"

int main()
{
    struct tareas tarea[10];
    int opc, x = -1;
    do
    {
        printf("Bienvenido al gestor de tareas, que desea hacer?\n");
        printf("1)Agregar una nueva tarea\n");
        printf("2)Marcar una tarea como completada\n");
        printf("3)Listar todas las tareas pendientes\n");
        printf("4)Listar todas las tareas\n");
        printf("5)Buscar\n");
        printf("6)Salir\n");
        scanf("%d", &opc);
        switch (opc)
        {
        case 1:
            {
                x++;
                ANT(&tarea[x], x);
            }
            break;
        case 2:
            {
                MTC(tarea, x);
            }
            break;
        case 3:
            {
                LTP(tarea, x);
                sleep(2);
            }
            break;
        case 4:
            {
                LTT(tarea, x);
                sleep(2);
            }
            break;
        case 5:
            {
                PB(tarea, x);
                sleep(2);
            }
            break;
        case 6:
            {
                printf("Saliendo...\n");
                sleep(1);
            }
            break;
        default:
            {
                printf("Ingrese una opcion valida\n");
                sleep(2);
            }
            break;
        }
        system("cls");
    }
    while(opc != 6);
    return 0;
}
