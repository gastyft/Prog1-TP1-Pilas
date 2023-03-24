#include <stdio.h>
#include <stdlib.h>
#include "pila.h"
#include <conio.h>
#define ESC 27


/**
Suponiendo la existencia de una pila MODELO que no esté
 vacía, eliminar de la pila DADA todos los elementos que
  sean iguales al tope de la pila MODELO.
*/

int main()
{
    Pila dada,modelo,aux;
    int num;
    char o=0;
    inicpila(&dada);
    inicpila(&modelo);
    inicpila(&aux);

    while(o!=27)
    {
        printf("Ingrese un numero entero\n");
        scanf("%d",&num);
        apilar(&dada,num);
        printf("Si desea continuar ingresando datos presione cualquier tecla, sino presione ESCAPE para finalizar\n\n");
        fflush(stdin);
        o=getch();
        system("cls");
    }
    apilar(&modelo,5);
    while(!pilavacia(&dada))
    {

        if(tope(&dada)== tope(&modelo))
        {
            desapilar(&dada);
        }

        apilar(&aux,desapilar(&dada));
    }
while(!pilavacia(&aux)){
    apilar(&dada,desapilar(&aux));
}
    mostrar(&dada);
    mostrar(&modelo);
    return 0;
}
