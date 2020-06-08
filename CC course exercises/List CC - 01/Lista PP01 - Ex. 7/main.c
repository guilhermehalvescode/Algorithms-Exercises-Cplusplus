#include <stdio.h>
#include <stdlib.h>

int main()
{
    float F,C;
    printf("\nInsira uma temperatura em Farenheit para coverte-la para Celsius:\n");
    scanf ("%f",&F);
    C=5*(F-32)/9.0;
    printf("\nO valor da temperatura em Celsius e:%.2f",C);
    return 0;
}
