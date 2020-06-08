#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,x,v[10];
    for(i=0;i<10;i++){
        printf("\nDigite o valor do vetor no indice %d: ",i+1);
        scanf("%d",&v[i]);
    }
    printf("\nDigite um numero x: ");
    scanf("%d",&x);
    for(i=0;i<10;i++){
        if(v[i]%x==0){
            printf("[%d] ",v[i]);
        }
    }

    return 0;
}
