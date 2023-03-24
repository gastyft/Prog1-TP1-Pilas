#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include"pila.h"
#define ESC 27
/**
 Determinar si la cantidad de elementos de la pila DADA es par. Si es par,
  pasar el elemento del tope de la pila AUX a la pila PAR
  y si es impar pasar el tope a la pila IMPAR. (NO contar los elementos)

*/
int main()
{
    Pila dada,PAR,IMPAR;
    inicpila(&dada);
    inicpila(&PAR);
    inicpila(&IMPAR);
    char o=0;
    int num;
    while(o!=27)
    {
        printf("Ingrese valor entero para pila dada \n\n");
        scanf("%d",&num);
        apilar(&dada,num);
        printf("Presione escape para salir o cualquier tecla para continuar \n\n");
        fflush(stdin);
        o=getch();
    }



    while(!pilavacia(&dada))
    {
        if(tope(&dada)%2==0)
        {
            apilar(&PAR,desapilar(&dada));
        }
        else
        {
            apilar(&IMPAR,desapilar(&dada));
        }
    }

    mostrar(&dada);
    mostrar(&PAR);
    mostrar(&IMPAR);


    return 0;
}

