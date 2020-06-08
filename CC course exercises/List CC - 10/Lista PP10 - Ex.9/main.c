#include <stdio.h>
#include <stdlib.h>

void imprime(int *v, int n){
    int i;
    printf("\nVetor: \n");
    for(i=0;i<n;i++)
        printf("[%d] ",v[i]);
}

int main()
{
    int aux,*vet,i=1;
    vet = (int*) malloc(0);
    while(1){
        printf("\nDigite v[%d]: ",i);
        scanf("%d",&aux);
        vet=realloc(vet,i*sizeof(int));
        if(aux<0)
            break;
        vet[i-1]=aux;
        i++;
    }
    imprime(vet,i-1);
    return 0;
}
