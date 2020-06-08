#include <stdio.h>
#include <stdlib.h>

int main()
{
    int dias;
    float liq;
    printf("Uma empresa contrata um encanador R$30,00 por dia\n\nInforme a quantidade de dias trabalhados pelo encanador:\n");
    scanf("%i",&dias);
    liq=(30*dias)*0.92;
    printf("A quantia liquida desse trabalhador sera de: %.2f reais",liq);
    return 0;
}
