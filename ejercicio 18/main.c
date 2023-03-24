#include <stdio.h>
#include <stdlib.h>



/**Dado el siguiente ciclo (Pila1, Pila2 y Descarte son pilas):


while ( (!pilaVacia(&Pila1)) && (!pilaVacia(&Pila2)) ) {
      apilar (&Descarte, desapilar(&Pila1));
      apilar (&Descarte, desapilar(&Pila2));
}
a. ¿Cuál es la condición del ciclo? Explique con sus palabras
b. ¿Cuales son los posibles estados de ambas pilas al finalizar el ciclo?



a. La condicion del ciclo es que pila1 y pila 2 no esten vacias para entrar al codigo de la estructura

b. Los posibles estados son que una de las dos este vacia y la otra no.


*/
int main()
{
    printf("Hello world!\n");
    return 0;
}
