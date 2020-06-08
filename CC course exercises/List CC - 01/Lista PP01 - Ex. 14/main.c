#include <stdio.h>
#include <stdlib.h>
#define Pi 3.14

int main()
{
    int G;
    float R;
    printf ("\nDigite o valor de um angulo em graus para converte-lo em radianos:\n\n");
    scanf ("%i",&G);
    R=(float)(G*Pi)/180;
    printf("\nO valor do angulo de %i graus em radianos vale: %.2f radianos\n",G,R);
    return 0;
}
