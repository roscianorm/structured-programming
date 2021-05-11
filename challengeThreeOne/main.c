#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*
        Primer Reto:
            1. Crea una variable llamada x con valor 10.
            2. Utilizando operadores de asignacion, que esta variable se sume a si misma el doble de su valor
            3. Imprime el resultado
    */

    int x = 10;
    x += 2*x;
    printf("El valor de x mas x es igual a: %i",x);

    return 0;
}
