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
    printf("Ingrese el nombre de la tarea\n");
    scanf("%s", tarea->nombre);
    printf("Ingrese el estado de la tarea\n");
    printf("0)Pendiente\n");
    printf("1)Completada\n");
    scanf("%i", &tarea->estado);
    tarea->ID = x;
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
    int id, i, b = 0;
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
    int id, i, b = 0;
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
        printf("\n%s == %s\n", tarea[i].nombre, nom);
        Buscar(&tarea, x, i, nom);
    }
}

void Buscar (struct tareas tarea[10], int x, int i, char nom[10])
{
    printf("\n%s == %s\n", tarea[i].nombre, nom);
    if (tarea[i].nombre == nom)
    {
        printf("ID: %d  |Nombre: %s\n", &tarea[i].ID, &tarea[i].nombre);
        if (&tarea[i].estado == 0)
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
            //printf("ID: %d  |Nombre: %s\n", tarea[i].ID, tarea[i].nombre);
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
