#include <stdio.h>
#include <stdlib.h>
#include "../Librerias/pila.h"



/// 15 ¿Cuál es la condición del siguiente ciclo? ¿Cuándo finaliza el ciclo? (Pila1, Pila2, y Descarte son pilas)

///La condicion del siguiente ciclo es mientras la Pila1 no este vacia que haga lo que hay dentro de la estructura condicional repetitiva.
///El ciclo finaliza solo devolviendo error debido a que Pila1 jamas se vacia.

int main()
{
Pila Pila1,Pila2,Descarte;
inicpila(&Pila1);
inicpila(&Pila2);
inicpila(&Descarte);

apilar(&Pila1,1);
apilar(&Pila1,12);
apilar(&Pila1,13);
apilar(&Pila2,1);
apilar(&Pila2,12);
apilar(&Pila2,15);
apilar(&Pila2,15);
apilar(&Pila2,16);

while (!pilavacia(&Pila1)) {
   apilar(&Pila2,desapilar(&Descarte));
}

mostrar(&Pila1);
mostrar(&Pila2);
mostrar(&Descarte);


    return 0;
}
