#include <stdio.h>
#include <stdlib.h>

int main()
{
    float K,M;
    printf("\nDigite uma distancia em km para converte-la em milhas:\n");
    scanf("%f",&K);
    M=(K)/1.61;
    printf("\nA distancia digitada de %.1f km convertida em milhas e: %.1f milhas\n",K,M);
    return 0;
}
