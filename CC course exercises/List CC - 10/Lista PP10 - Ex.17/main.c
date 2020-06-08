#include <stdio.h>
#include <stdlib.h>
#define N 10

void zerar(int *v){
    int i;
    for(i=0;i<N;i++)
        v[i]=0;
}

int checkFull(int *v,int qtd){
    int i;
    for(i=(qtd-1)*N;i<qtd*N;i++)
        if(v[i]==0)
            return 0;
    return 1;
}

int* copiar(int *va,int *vn,int q){
    int i;
    for(i=0;i<(q-1)*N;i++)
        vn[i]=va[i];
    for(i=(q-1)*N;i<q*N;i++)
        vn[i]=0;
    free(va);
    return vn;
}

void imprime(int *v,int n){
    int i;
    printf("\nO vetor digitado e:\n");
    for(i=0;i<n;i++)
        printf("[%d] ",v[i]);
}

int main()
{
    int *vet,i=0,x,qtd=1;
    vet = (int*) malloc(qtd*N*sizeof(int));
    zerar(vet);
    while(1){
        printf("\nDigite um valor para vet[%d]: ",i+1);
        scanf("%d",&x);
        if(x==0)
            break;
        vet[i]=x;
        if(checkFull(vet,qtd)){
            int *v;
            qtd++;
            v = (int*) malloc(qtd*N*sizeof(int));
            vet = copiar(vet,v,qtd);
        }
        i++;
    }
    imprime(vet,i);

    return 0;
}
