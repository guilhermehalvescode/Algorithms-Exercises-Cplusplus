#include <stdio.h>
#include <stdlib.h>

int main()
{
    int N,contador=0,soma= 0;
    printf("Digite um valor N para mostrar a soma de N numeros:\n");
    scanf("%i",&N);
    for(contador=0;contador<=N;contador++){
    soma=soma+contador;
    }
    printf("\n%i\n",soma);
    return 0;
}
