#ifndef LIBRERIAS_H_INCLUDED
#define LIBRERIAS_H_INCLUDED

struct tareas
{
    int ID;
    char nombre[10];
    int estado;
};

void ANT (struct tareas *tarea, int x)
{
    if (x < 10)
    {
        printf("Ingrese el nombre de la tarea\n");
        scanf("%s", tarea->nombre);
        do
        {
            printf("Ingrese el estado de la tarea\n");
            printf("0)Pendiente\n");
            printf("1)Completada\n");
            scanf("%i", &tarea->estado);
            if ((tarea->estado != 0) && (tarea->estado != 1))
            {
                printf("Ingrese un valor valido\n");
            }
        }
        while (tarea->estado != 0 && tarea->estado != 1);
        tarea->ID = x;
    }
    else
    {
        printf("La lista de tareas esta llena, favor de reiniciar el programa...");
    }
}

void MTC (struct tareas tarea[10], int x)
{
    int id, i;
    if(x == -1)
    {
        printf("No existen tareas\n");
    }
    else
    {
        printf("Lista de tareas pendientes:\n");
        for (i = 0; i <= x; i++)
        {
            if (tarea[i].estado == 0)
            {
                printf("ID: %d  |Nombre: %s\n", tarea[i].ID, tarea[i].nombre);
            }
        }
        printf("\nIngrese el ID de la tarea pendiente\n");
        scanf("%d", &id);
        if(id <= x)
        {
            if (tarea[id].estado == 0)
            {
                tarea[id].estado = 1;
                printf("Estado actualizado, tarea completada\n");
            }
            else
            {
                printf("Tarea ya completada\n");
            }
        }
        else
        {
            printf("La tarea no existe\n");
        }
    }

}

void LTP (struct tareas tarea[10], int x)
{
    int i, b = 0;
    if(x == -1)
    {
        printf("No existen tareas\n");
    }
    else
    {
        printf("Lista de tareas pendientes:\n");
        for (i = 0; i <= x; i++)
        {
            if (tarea[i].estado == 0)
            {
                b = 1;
                printf("ID: %d  |Nombre: %s\n", tarea[i].ID, tarea[i].nombre);
            }
        }
        if(b == 0)
        {
            printf("Felicidades, no hay tareas pendientes\n");
        }
    }
}

void LTT (struct tareas tarea[10], int x)
{
    int i;
    if(x == -1)
    {
        printf("No existen tareas\n");
    }
    else
    {
        printf("Lista de tareas:\n");
        for (i = 0; i <= x; i++)
        {
            printf("ID: %d  |Nombre: %s |Estado: ", tarea[i].ID, tarea[i].nombre);
            if (tarea[i].estado == 0)
            {
                printf("Pendiente\n");
            }
            else
            {
                printf("Completado\n");
            }
        }
    }
}

void PB (struct tareas tarea[10], int x)
{
    int i = 0;
    char nom[10];
    if(x == -1)
    {
        printf("No existen tareas\n");
    }
    else
    {
        printf("Ingrese el nombre de la tarea a buscar:\n");
        scanf("%s", nom);
        Buscar(tarea, x, i, nom);
    }
}

void Buscar (struct tareas tarea[10], int x, int i, char nom[10])
{
    if (strcmp(tarea[i].nombre, nom) == 0)
    {
        printf("ID: %d  |Nombre: %s |Estado: ", tarea[i].ID, tarea[i].nombre);
        if (tarea[i].estado == 0)
        {
            printf("Pendiente\n");
        }
        else
        {
            printf("Completado\n");
        }
        return;
    }
    else
    {
        if (i > x)
        {
            printf("No existe la tarea\n");
            return;
        }
        else
        {
            i++;
            Buscar(tarea, x, i, nom);
        }
    }
}
#endif // LIBRERIAS_H_INCLUDED
