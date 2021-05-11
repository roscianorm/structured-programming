#include <stdio.h>
#include <stdlib.h>

int main()
{
    int valA, valB;

    valA = 5;

    printf("Adivina el numero entre el 1 y el 10 que estoy pensando! \n");
    scanf(" %i", &valB);

    if(valA == valB)
    {
        printf("Adivinaste, el numero era %i", valA);
    }
    else
    {
        printf("Ese no es perdiste!");
    }

    return 0;
}
