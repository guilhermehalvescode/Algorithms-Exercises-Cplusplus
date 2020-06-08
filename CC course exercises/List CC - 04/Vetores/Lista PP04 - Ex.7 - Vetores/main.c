#include <stdio.h>
#include <stdlib.h>

int main()
{
    int v[10],x,i,maior,indice;
    for(i=0;i<10;i++){
        printf("Digite um valor x para armazenar no indice %d: ",i+1);
        scanf("%d",&x);
        v[i]=x;
        if(i==0)
            maior=v[i];
        if(v[i]>maior){
            maior=v[i];
            indice=i;
        }
    }
    printf("O vetor digitado e:\n");
    for(i=0;i<10;i++){
        printf("[%d] ",v[i]);
    }
    printf("\nO maior elemento desse vetor e %d e se encontra na posicao %d\n",maior,indice+1);
    return 0;
}
