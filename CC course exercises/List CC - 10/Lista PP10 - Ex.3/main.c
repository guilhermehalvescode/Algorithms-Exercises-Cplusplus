#include <stdio.h>
#include <stdlib.h>

void leiaCheck(int *vet,int tam,int *v){
    int i;
    for(i=0;i<tam;i++){
        printf("\nDigite v[%d]: ",i+1);
        scanf("%d",&vet[i]);
        if(vet[i]%2==0)
            v[0]++; //par
        else
            v[1]++; //impar
    }
}

int main()
{
    int N,*v,parimpar[2]={0,0};
    printf("Digite N: ");
    scanf("%d",&N);
    v =(int*) malloc(N*sizeof(int));
    leiaCheck(v,N,parimpar);
    free(v);
    printf("\nPar: %d\nImpar: %d",parimpar[0],parimpar[1]);
    return 0;
}
