#include <stdio.h>
#include <stdlib.h>
#include "pila.h"
#include <conio.h>
#define  ESC 27
/**
2. Cargar desde el teclado la pila ORIGEN e
inicializar en vacío la pila DESTINO. Pasar todos los elementos de la pila ORIGEN a la pila DESTINO.
*/
int main()
{
    Pila origen,destino;
    char o=0;
    inicpila(&origen);
    inicpila(&destino);

    while(o != ESC)
    {
        printf("\nIngrese valor de pila");
        leer(&origen);

        printf("\n presione escape para finalizar con la carga de datos\n\n");
        o=getch();
    }



    do
    {
        apilar(&destino,desapilar(&origen));

    }
    while(!pilavacia(&origen));
    printf("\n Pila origen");
    mostrar(&origen);
    printf("\n Pila destino");
    mostrar(&destino);
    return 0;
}
