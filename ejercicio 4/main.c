#include <stdio.h>
#include <stdlib.h>
#include "pila.h"
#include <conio.h>
#define ESC 27


/** Cargar desde el teclado la pila ORIGEN e inicializar en vacío la pila DESTINO.
 Pasar los elementos de la pila ORIGEN a la pila DESTINO, pero dejándolos en el mismo orden.
*/



int main()
{
    Pila origen,destino,aux;
    char o;
    inicpila(&origen);
    inicpila(&destino);
    inicpila(&aux);

    while(o!=27)
    {
        printf("\n ingrese dato");
        leer(&origen);


        fflush(stdin);
        o= getch();
        printf("\n presione escape para finalizar con la carga de datos\n\n");
    }

    while(!pilavacia(&origen))
    {
        apilar(&aux,desapilar(&origen));
    }
    while(!pilavacia(&aux))
    {
        apilar(&destino,desapilar(&aux));
    }

    printf("PILA ORIGEN\n");

    mostrar(&origen);

    printf("PILA DESTINO\n");

    mostrar(&destino);

    printf("Pila aux\n");

    mostrar(&aux);


    return 0;
}
