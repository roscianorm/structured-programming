#include <stdio.h>
#include <stdlib.h>

int main()
{

    /*
        El reto conciste en:
            1. Crear dos variables.
            2. Ingresar y guardar el valor de ambas variables.
            3. Intercambia el valor de las varaibles con ayuda de una variable auxiliar
            4. Imprime el calor de ambas variables ya intercambiadas.
    */

    int a;
    int b;
    int aux;

    printf("Ingresa el valor del entero a:\n");
    scanf(" %i", &a);

    printf("Ingresa el valor del entero b:\n");
    scanf(" %i", &b);

    aux = a;
    a = b;
    b = aux;

    printf("El valor de las variables se ha intercambiado, ahora a es igual a: %i y b es igual a: %i",a,b);

    return 0;
}
