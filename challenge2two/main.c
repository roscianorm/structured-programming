#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*
        El reto conciste en:
            Ingresar la temperatura en grados Fahrenheit.
            Realiza la operacion para convertir de grados Fahrenheit a Celcius.
            Imprime el resultado de la conversion
    */
    float fahrenheit, celcius;

    printf("Ingresa la temperatura en grados Fahrenheit: ");
    scanf(" %f", &fahrenheit);

    celcius = fahrenheit - 32;

    printf("La temperatura en grados celcius es: %f", celcius);

    return 0;
}
