#include <stdio.h>
#include <stdlib.h>

int main()
{
    float C,F;
    printf ("\n\nConversor de temperatura de Celsius para Farenheit:\n\n");
    printf("Insira o valor de uma temperatura em Celsius para transforma-la em Farenheit:\n");
    scanf("%f",&C);
    F = (C*9.0)/5.0+32;
    printf("\nA temperatura escolhida em Celsius transformada para Farenheit e:%.2f",F);
    return 0;
}
