#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main()
{
    // printf("Hello world!\n");

    int integer = 1;
    float floatNumber = 3.14;
    double doubleNumber = 1.7;
    char letter = 'C';
    bool boolean = false;

    /*
        En la siguiente linea estamos imprimiendo mi variable integer, debemos especificar el tipo
        de variable para poder imprimirla. Esto se hace con el simbolo de porcentaje(%) y la letra
        que identifica el tipo de variable, en este caso para las variables de tipo int es la letra i
    */
    printf("El valor de la variable integer es: %i \n\n", integer);

    printf("El valor de la variable floatNumber es = %f \n\n", floatNumber);

    // Si, a las variables de tipo double tambien se les identifica con la letra f
    printf("El valor de la variable doubleNumber es = %f \n\n", doubleNumber);

    printf("El valor de la variable letter es = %c \n\n", letter);

    printf("El valor de la variable boolean es = %d \n\n", boolean);

    // Tambien podemos juntar los anteriores printf() en una sola linea, pero es bastante complicado de leer.
    // printf("-------------------------------------------------------\n\n");
    // printf("El valor de la variable integer es: %i, \n\n El valor de la variable floatNumber es = %f, \n\n El valor de la variable doubleNumber es = %f, \n\n El valor de la variable letter es = %c, \n\n El valor de la variable boolean es = %d \n\n",integer,floatNumber,doubleNumber,letter,boolean);

    // Como leer los inputs del usuario
    int userInt;
    char favoriteLetter;

    /*
        Es importante dejar un espacio antes de indicar el tipo de variable, pues esto
        puede provocar bugs o que la variable tome un valor no deseado
    */
    printf("Ingresa el valor del entero N\n");
    scanf(" %i", & userInt);

    printf("Ingresa el valor del char favoriteLetter\n");
    scanf(" %c", & favoriteLetter);

    printf("El entero N es igual a = %i\n\n",userInt);
    printf("El char favoriteLetter es igual a = %c\n\n",favoriteLetter);

    return 0;
}
