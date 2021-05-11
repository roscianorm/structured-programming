#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*
        Segundo Reto:
            1. Ingresa un numberero entero.
            2. Usando operadores de asignacion realiza la operacion de modulo del valor ingresado con 5.
            3. Imprime el resultado mas uno usando operadores de incremento.
    */

    int number;

    printf("Ingresa un numberero entero:");
    scanf(" %i", &number);

    number %= 5;
    number++;

    printf("El valor de number con modulo de 5 mas 1 es = %i", number);

    return 0;
}
