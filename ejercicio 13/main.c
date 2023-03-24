#include <stdio.h>
#include <stdlib.h>
#include "../Librerias/pila.h"
#include <conio.h>
#define ESC 27


/**  Suponiendo la existencia de una pila LÍMITE, pasar los elementos de la pila DADA que sean mayores o iguales que el tope de LIMITE a la pila
MAYORES, y los elementos que sean menores a la pila MENORES.
*/
int main()
{
    char o=0;
    Pila dada,limite,mayores,menores;
    int num;
    inicpila(&dada);
    inicpila(&limite);
    inicpila(&mayores);
    inicpila(&menores);

    while(o!=27){

        printf("Ingrese valor entero\n\t");
        scanf("%d",&num);
        apilar(&dada,num);
        printf("Presione ESC para salir o cualquier tecla para continuar\n");
        fflush(stdin);
        o=getch();
        system("cls");
    }
apilar(&limite,5);

        while(!pilavacia(&dada)){
            if(tope(&dada)<tope(&limite)){
                apilar(&menores,desapilar(&dada));
            }
            else{
                apilar(&mayores,desapilar(&dada));
            }
        }


        printf("PILA MAYOR\n");
        mostrar(&mayores);
        printf("\n PILA MENOR\n");
        mostrar(&menores);
        printf("\nPILA LIMITE");
        mostrar(&limite);



    return 0;
}
