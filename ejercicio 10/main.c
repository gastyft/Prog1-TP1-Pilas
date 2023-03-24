#include <stdio.h>
#include <stdlib.h>
#include"../Librerias/pila.h"
#include <conio.h>
#define ESC 27

/**
Cargar las pilas A y B, y luego compararlas, evaluando si son completamente iguales (en cantidad de elementos,
valores que contienen y posición de los mismos). Mostrar por pantalla el resultado.
*/


int main()
{
    Pila A,B,auxA,auxB;
    inicpila(&A);
    inicpila(&B);
    inicpila(&auxA);
    inicpila(&auxB);
    char o,op;
    int num,num1;
///ingresa datos a pila A
    while(o!=27)
    {
        printf("Ingrese valor entero para pila A \n\n");
        scanf("%d",&num);
        apilar(&A,num);
        printf("Presione escape para salir o cualquier tecla para continuar \n\n");
        fflush(stdin);
        o=getch();
    }
///ingresa datos a pila B
    while(op!=27)
    {
        printf("Ingrese valor entero para pila B\n\n");
        scanf("%d",&num1);
        apilar(&B,num1);
        printf("Presione escape para salir o cualquier tecla para continuar\n\n");
        fflush(stdin);
        op=getch();
    }
    system("cls");
    ///compara los topes de las pilas y si son iguales devuelve sus valores

    do
    {
        if(tope(&A)==tope(&B))
        {
            apilar(&auxA,desapilar(&A));
            apilar(&auxB,desapilar(&B));
        }
        else{

        }
    }while(!pilavacia(&A) && !pilavacia(&B));



    ///si quedan datos en A los pasa a auxA
    while(!pilavacia(&A))
    {
        apilar(&auxA,desapilar(&A));
    }
///si quedan datos en B los pasa a auxB
    while(!pilavacia(&B))
    {
        apilar(&auxB,desapilar(&B));
    }
///Muestreo de pilas
    mostrar(&auxA);
    mostrar(&auxB);




    return 0;
}
