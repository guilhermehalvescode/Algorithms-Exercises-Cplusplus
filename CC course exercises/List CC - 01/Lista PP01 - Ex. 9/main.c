#include <stdio.h>
#include <stdlib.h>

int main()
{
   float K,C;
    printf("\nDigite uma temperatura em Celsius para converte-la em Kelvin:\n");
    scanf("%f",&C);
    K=(C+273.15);
    printf("\nA temperatura em Celsius e: %.1f\n",K);
    return 0;
}
