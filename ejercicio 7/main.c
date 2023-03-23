#include <stdio.h>
#include <stdlib.h>
#include<conio.h>
#include "pila.h"
#define ESC 27

/** Pasar el último elemento (base) de la pila DADA
a su primera posición (tope),
dejando los restantes elementos en el mismo orden.*/

int main()
{

    char op;
    Pila dada,aux,aux1;

    inicpila(&dada);
    inicpila(&aux);
    inicpila(&aux1);


    while(op!=27)
    {
        printf("Hello world!\n");
        fflush(stdin);
        leer(&dada);
        printf("Escape para salir\n");


        op=getch();
    }
while(!pilavacia(&dada)){
        apilar(&aux,desapilar(&dada));

}
apilar(&aux1,desapilar(&aux));
while(!pilavacia(&aux)){
    apilar(&dada,desapilar(&aux));
}
apilar(&dada,desapilar(&aux1));

    mostrar(&dada);

    return 0;
}
