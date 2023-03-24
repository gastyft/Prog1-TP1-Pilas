#include <stdio.h>
#include <stdlib.h>



/**
 Para el ejercicio “Cargar por teclado una pila ORIGEN y
 pasar a la pila DISTINTO todos aquellos elementos que preceden al valor 5 (elementos entre el tope y el valor 5).
  No se asegura que exista algún valor 5”, se realizó el siguiente programa:
// este programa carga por teclado una pila Origen y pasa a la pila Destino todos aquellos elementos que preceden el valor 5
a. ¿Resuelve el problema planteado?
b. ¿Cuáles son los errores que encuentra?
c. Reescribir el código para que resuelva adecuadamente el problema planteado.
d. Indicar los componentes del programa.

*/
/**
a. No, no resuelve el problema planteado.

b. Los errores que encuentro son que el if y el while estan invertidos.
es decir que solo va a preguntar una vez si la pila origen se encuentra vacia
y que va a usar un while para la condicion tope de la pila origen sea distinto a 5 y debe ser
que el tope de la pila origen sea menor a 5.
Y no tiene el return al final del main.

c.
int main() {
 Pila Origen, Distinto;
   inicpila(&Origen);
   inicpila(&Distinto);
   leer(&Origen);
   while(!pilaVacia(&Origen)){
          if(tope(&Origen) < 5) {
         apilar (&Distinto, desapilar(&Origen));
      }
   }
return 0;
}

*/
int main()
{
    printf("Hello world!\n");
    return 0;
}
