#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*
        El primer reto conciste en:
            1. Ingresa los valores necesarios para calcular el area de un cilindro(radio, altura, area y volumen).
            2. Realiza la operacion.
            3. Imprime el resultado del area.
    */

    float radio, altura, area, volumen;

    printf("Ingresa el radio de la base del cilindro:");
    scanf(" %f", &radio);

    printf("Ingresa la altura del cilindro:");
    scanf(" %f", &altura);

    printf("\n");

    area = (2 * 3.14) * radio * altura + (2 * 3.14) * (radio*radio);
    volumen = 3.14 * (radio*radio) * altura;

    printf("El area del cilindro es: %f\n", area);
    printf("El volumen del cilindro es: %f\n", volumen);

    return 0;
}
