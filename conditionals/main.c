#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Clase de condicionales \n");

    float valA, valB, valC;
    valA = valB = 100;

    printf("Primera condicional \n");

    if(valA == valB)
    {
        printf("valA y valB son iguales \n");
    }

    if(valA == valB)
    {
        printf("Ambos valores son iguales \n");
        valC = valA + valB;
        printf("Ademas la suma de ambos numeros es: %f", valC);
    }

    return 0;
}
