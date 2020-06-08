#include <stdio.h>
#include <stdlib.h>

int main()
{
    int valor[6],i;
    for(i=0;i<6;i++){
        printf("Digite um valor:\n");
        scanf("%d",&valor[i]);
    }
    for(i=0;i<6;i++){
    printf("\nValor da posicao %d e: %d\n",i+1,valor[i]);

    }
    return 0;
}
