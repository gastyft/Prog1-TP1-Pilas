#include <stdio.h>
#include <stdlib.h>
#include "../Librerias/pila.h"
#include <conio.h>
#define ESC 27

/**
Suponiendo la existencia de una pila MODELO (vacía o no),
eliminar de la pila DADA todos los elementos que existan en MODELO.
*/


int main()
{
    char o=0;
    Pila dada,modelo,aux,aux2;
    int num;
    inicpila(&dada);
    inicpila(&modelo);
    inicpila(&aux);
inicpila(&aux2);
    while(o!=27)
    {

        printf("Ingrese un numero entero\n\t");
        scanf("%d",&num);
        apilar(&dada,num);
        printf("presione ESCAPE para salir o cualquier tecla para continuar\n");
        o=getch();
    }
    system("cls");
    apilar(&modelo,7);
    apilar(&modelo,5);
    apilar(&modelo,3);



    while(!pilavacia(&modelo))
    {
        while(!pilavacia(&dada))
        {
            if(tope(&dada)==tope(&modelo))
            {
                desapilar(&dada);

            }
            else
            {
                apilar(&aux,desapilar(&dada));
            }


        }
        apilar(&aux2,desapilar(&modelo));
    while(!pilavacia(&aux)){
        apilar(&dada,desapilar(&aux));
    }
    }
while(!pilavacia(&aux2)){
    apilar(&modelo,desapilar(&aux2));
}


    mostrar(&dada);

    mostrar(&modelo);



    return 0;
}
