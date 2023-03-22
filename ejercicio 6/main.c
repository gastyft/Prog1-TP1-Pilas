#include <stdio.h>
#include <stdlib.h>
#include "pila.h"
#include <conio.h>
#define ESC 27

/**
Cargar desde el teclado la pila DADA. Invertir la pila de manera que DADA contenga los elementos cargados originalmente en ella,
 pero en orden inverso.

*/

int main()
{
    Pila dada,aux, aux1;
    char o;


    inicpila(&dada);
    inicpila(&aux);
    inicpila(&aux1);


    while(o != ESC)
    {
        printf("\nIngrese valor de pila");
        leer(&dada);

        printf("\n presione escape para finalizar con la carga de datos\n\n");
        o=getch();
    }

if(!pilavacia(&dada)){
      apilar(&aux1,desapilar(&dada);

       while(!pilavacia(&dada)){


        apilar(&aux,desapilar(&dada));

    }
}

    while(!pilavacia(&aux)){
        apilar(&dada,desapilar(&aux));

    }

    while(!pilavacia(&aux1)){
        apilar(&dada,desapilar(&aux1));

    }
    mostrar(&dada);

        return 0;
}
