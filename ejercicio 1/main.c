#include <stdio.h>
#include <stdlib.h>
#include "pila.h"


/**1. Cargar desde el teclado una pila DADA con 5 elementos. Pasar los tres primeros elementos
que se encuentren en el tope a la pila AUX1 y los restantes a la pila AUX2, ambas pilas inicializadas.*/

int main()
{
    Pila dada,aux1,aux2;
    inicpila(&dada);
    inicpila(&aux1);
    inicpila(&aux2);

    apilar(&dada,1);
    apilar(&dada,2);
    apilar(&dada,3);
    apilar(&dada,4);
    apilar(&dada,5);
//desapila  3 elementos a aux1
    apilar(&aux1,desapilar(&dada));
    apilar(&aux1,desapilar(&dada));
    apilar(&aux1,desapilar(&dada));
    //desapila los 2 elementos restantes a aux2
    apilar(&aux2,desapilar(&dada));
    apilar(&aux2,desapilar(&dada));
    mostrar(&dada);
    mostrar(&aux1);
    mostrar(&aux2);
    return 0;
}
