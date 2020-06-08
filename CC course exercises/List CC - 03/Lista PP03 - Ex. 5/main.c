#include <stdio.h>
#include <stdlib.h>

int main()
{
    int contador;
    float soma,valor_d;
    printf("Digite 10 valores para soma-los\n");
    for(contador=0;contador<10;contador++){
        printf("Digite um valor:\n");
        scanf("%f",&valor_d);
        soma=soma+valor_d;
    }
    printf("O valor da soma e: %.1f",soma);
    return 0;
}
