#include <stdio.h>
#include <stdlib.h>

int main()
{
    float v[5],menor,maior;
    int i,posM,posm;
    for(i=0;i<5;i++){
        printf("\nDigite o valor do vetor na posicao %d: ",i+1);
        scanf("%f",&v[i]);
    }
    for(i=0;i<5;i++){
        if(i==0){
            maior=v[i];
            menor=v[i];
            posM=i;
            posm=i;
        }
        if(v[i]>maior){
            maior=v[i];
            posM=i;
        }
        if(v[i]<menor){
            menor=v[i];
            posm=i;
        }
    }
    printf("\nA coordenada maior se encontra na posicao %d\n\nE a menor se encontra %d ",posM+1,posm+1);
    return 0;
}
