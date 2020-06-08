#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,a[10],b[10],c[10];
    for(i=0;i<10;i++){
        printf("\nDigite o valor do primeiro vetor no indice %d: ",i+1);
        scanf("%d",&a[i]);
    }
    for(i=0;i<10;i++){
        printf("\nDigite o valor do segundo vetor no indice %d: ",i+1);
        scanf("%d",&b[i]);
    }
    for(i=0;i<10;i++){
        if((i+1)%2==0){
            c[i]=a[i];
        }else{
            c[i]=b[i];
        }
    }
    printf("\nO vetor formado e: ");
    for(i=0;i<10;i++){
        printf("[%d] ",c[i]);
    }
    return 0;
}
