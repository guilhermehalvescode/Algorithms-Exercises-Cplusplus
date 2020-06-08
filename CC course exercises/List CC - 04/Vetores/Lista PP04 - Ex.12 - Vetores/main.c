#include <stdio.h>
#include <stdlib.h>

int main()
{
    int v[5],i,maior,menor,soma=0;
    float media;
    for(i=0;i<5;i++){
        printf("Digite o valor %d: ",i+1);
        scanf("%d",&v[i]);
        if(i==0){
            maior=v[i];
            menor=v[i];
        }
        if(v[i]>maior)
            maior=v[i];
        if(v[i]<menor)
            menor=v[i];
        soma+=v[i];
    }
    printf("Os valores lidos foram: \n\n");
    for(i=0;i<5;i++){
        printf("[%d] ",v[i]);
    }
    media=(float)soma/i;
    printf("\n\nO maior valor lido foi %d\n\nE o menor valor lido foi %d\n\nA media dos valores digitados foi %.2f",maior,menor,media);
    return 0;
}
