#include <stdio.h>
#include <stdlib.h>

int main()
{
    int N;
    printf("Digite um valor N para mostrar a quantidade N de numeros inteiros de forma descrescente:\n");
    scanf("%i",&N);
    while(N>0){
        printf("\n%i\n",N);
        N--;
    }
    return 0;
}
