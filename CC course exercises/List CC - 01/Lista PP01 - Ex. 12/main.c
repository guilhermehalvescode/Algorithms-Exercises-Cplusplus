#include <stdio.h>
#include <stdlib.h>

int main()
{
  float K,M;
    printf("\nDigite uma distancia em milhas para converte-la em km:\n");
    scanf ("%f",&M);
    K=1.61*M;
    printf("\nA distancia digitada de %.1f milhas convertida em km e: %.1f km\n",M,K);
    return 0;
}
