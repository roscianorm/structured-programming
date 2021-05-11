#include <stdio.h>
#include <stdlib.h>

int main()
{
    int rSum;       // Suma
    float rRes;     // Resta
    float rDiv;     // Division
    float rMult;    // Multiplicacion
    int rMod;       // Modulo

    rSum = 7 + 3;
    rRes = 7.1 - 3.1;
    rDiv = 7.0 / 3.0;
    rMult = 7 * 3;
    rMod = 7 % 3;

    printf("Resultado de la suma: %i\n", rSum);
    printf("Resultado de la resta: %f\n", rRes);
    printf("Resultado de la division: %f\n", rDiv);
    printf("Resultado de la multiplicacion: %f\n", rMult);
    printf("Resultado de la modulo: %i\n", rMod);

    return 0;
}
