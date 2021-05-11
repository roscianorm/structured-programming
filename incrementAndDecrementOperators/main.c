#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Increment and Decrement operators\n");

    int value,result;

    value = 25;
    result = value++;

    printf("Resultado = %i\n",result);
    printf("Value = %i\n",value);

    value = 25;
    result = ++value;

    printf("Resultado = %i\n",result);
    printf("Value = %i\n",value);

    value = 25;
    result = value--;

    printf("Resultado = %i\n",result);
    printf("Value = %i\n",value);

    value = 25;
    result = --value;

    printf("Resultado = %i\n",result);
    printf("Value = %i\n",value);

    return 0;
}
