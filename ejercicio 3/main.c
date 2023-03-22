#include <stdio.h>
#include <stdlib.h>
#include "pila.h"
#include <conio.h>
#define ESC 27

/**Cargar desde teclado una pila DADA y pasar a la pila DISTINTOS todos aquellos elementos distintos al valor 8 */

int main()
{

  Pila dada,aux,aux2;
    char o=0;
    inicpila(&dada);
    inicpila(&aux);
    inicpila(&aux2);

    while(o != ESC)
    {
        printf("\nIngrese valor de pila");
        leer(&dada);

        printf("\n presione escape para finalizar con la carga de datos\n\n");
        fflush(stdin);
        o=getch();
    }
while(!pilavacia(&dada)){

if(tope(&dada)!=8){
    apilar(&aux,desapilar(&dada));
}
else
{
apilar(&aux2,desapilar(&dada));
}
}
mostrar(&dada);
mostrar(&aux);
mostrar(&aux2);



    return 0;
}
