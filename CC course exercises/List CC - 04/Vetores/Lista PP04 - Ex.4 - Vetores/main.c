#include <stdio.h>
#include <stdlib.h>

int main()
{
    int vetor[8],r,X,Y,i;
    for(i=0;i<8;i++){
        printf("Digite a coordenada do vetor de indice %d: ",i+1);
        scanf("%d",&vetor[i]);
    }
    printf("Digite o valor do indice X para somar com o Y\n\nDigite x: ");
    scanf("%d",&X);
    printf("\nDigite Y: ");
    scanf("%d",&Y);
    r=vetor[X-1]+vetor[Y-1];
    printf("O valor da soma e: %d",r);
    return 0;
}
