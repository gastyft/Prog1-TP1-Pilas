#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include "pila.h"
#define ESC 27


/**
Comparar la cantidad de elementos de las pilas A y B. Mostrar por pantalla el resultado.
*/
int main()
{
    Pila A,B,auxA,auxB;
    char o=0,op=0;
    int num,num1;

    inicpila(&A);
    inicpila(&B);
    inicpila(&auxA);
    inicpila(&auxB);
    while(o!=27)
    {
        printf("Ingrese un valor entero para Pila A\n");
        scanf("%d",&num);
        apilar(&A,num);
        printf("Presione escape para salir o cualquier tecla para continuar\n\n");
        fflush(stdin);
        o=getch();

    }

    while(op!=27)
    {
        printf("Ingrese un valor entero para Pila B\n");
        scanf("%d",&num1);
        apilar(&B,num1);
        printf("Presione escape para salir o cualquier tecla para continuar\n\n");
        fflush(stdin);
        op=getch();

    }
    system("cls");
    while(!pilavacia(&A)&& !pilavacia(&B))
    {
        if(tope(&A)== tope(&B))
        {
            printf("Los valores de A %d y B %d son iguales\n\n",tope(&A),tope(&B));
        }

        else
        {
            printf("Los valores de A y B son distintos\n");

        }
        apilar(&auxA,desapilar(&A));
        apilar(&auxB,desapilar(&B));
    }


    mostrar(&auxA);
    mostrar(&auxB);

    return 0;
}
