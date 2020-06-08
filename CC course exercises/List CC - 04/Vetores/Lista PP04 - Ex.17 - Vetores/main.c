#include <stdio.h>
#include <stdlib.h>

int main()
{
    float v[10];
    int i;
    for(i=0;i<10;i++){
        printf("\nDigite o valor do vetor no indice %d: ",i+1);
        scanf("%f",&v[i]);
    }
    for(i=0;i<10;i++){
        if(v[i]<0)
            v[i]=0;
    }
    printf("\nO novo vetor e: ");
    for(i=0;i<10;i++){
        printf("[%.2f] ",v[i]);
    }
    return 0;
}
