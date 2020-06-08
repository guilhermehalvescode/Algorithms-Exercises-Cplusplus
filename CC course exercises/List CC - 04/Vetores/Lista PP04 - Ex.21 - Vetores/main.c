#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,a[10],b[10],c[10];
    for(i=0;i<10;i++){
        printf("\nDigite o valor do vetor A no indice %d: ",i+1);
        scanf("%d",&a[i]);
    }
    for(i=0;i<10;i++){
        printf("\nDigite o valor do vetor B no indice %d: ",i+1);
        scanf("%d",&b[i]);
    }
    for(i=0;i<10;i++){
        c[i]=a[i]-b[i];
    }
    printf("\nO vetor C vale: ");
    for(i=0;i<10;i++){
        printf("[%d] ",c[i]);

    }
    return 0;
}
