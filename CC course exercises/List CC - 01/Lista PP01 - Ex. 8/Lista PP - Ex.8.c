#include <stdio.h>
#include <stdlib.h>

int main (){

    float K,C;
    printf("\nDigite uma temperatura em Kelvin para converte-la em Celsius:\n");
    scanf("%f",&K);
    C=(K-273.15);
    printf("\nA temperatura em Celsius e:%.1f\n",C);
    return 0;
}

