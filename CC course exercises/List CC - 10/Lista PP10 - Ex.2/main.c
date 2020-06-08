#include <stdio.h>
#include <stdlib.h>

void ler(int *vet, int tam){
    int i;
    for(i=0;i<tam;i++){
        printf("\nDigite v[%d]: ",i+1);
        scanf("%d",&vet[i]);
    }
}

void imprime(int *vet, int tam){
    int i;
    for(i=0;i<tam;i++)
        printf("[%d] ",vet[i]);
}
int main()
{
    int N,*v;
    scanf("%d",&N);
    v=(int *) malloc(N*sizeof(int));
    ler(v,N);
    imprime(v,N);
    free(v);
    return 0;
}
