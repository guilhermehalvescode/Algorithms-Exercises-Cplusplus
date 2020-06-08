#include <stdio.h>
#include <stdlib.h>

int main()
{
    float A[10],B[10];
    int i;
    for(i=0;i<10;i++){
        printf("Digite um valor da coordenada de um vetor:\n");
        scanf("%f",&A[i]);
        B[i]=A[i]*A[i];
    }
    printf("\n\nConjunto A:\n");
    for(i=0;i<10;i++){
        printf("[%.0f] ",A[i]);
    }
    printf("\n\nConjunto B:\n");
    for(i=0;i<10;i++){
        printf("[%.2f] ",B[i]);
    }
    printf("\n");
    return 0;
}
