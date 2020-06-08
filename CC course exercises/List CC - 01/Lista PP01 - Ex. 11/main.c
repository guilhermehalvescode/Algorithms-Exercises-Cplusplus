#include <stdio.h>
#include <stdlib.h>

int main()
{
    float K,M;
    printf("\nDigite uma velocidade em m/s para converte-la em km/h:\n");
    scanf ("%f",&M);
    K=M*3.6;
    printf("\nA velocidade digitada de %.1f m/s convertida em km/h e: %.1f km/h\n",M,K);
    return 0;
}
