#include <stdio.h>
#include <stdlib.h>

int main()
{
    int v[6],i,x;
    for(i=0;i<6;i++){
        printf("Digite o valor de uma coordenada do vetor de indice %d: ",i+1);
        scanf("%d",&x);
        if(x%2!=0){
            i--;
            continue;
        }
        v[i]=x;
    }
    for(i=5;i>=0;i--){
        printf("[%d] ",v[i]);
    }
    return 0;
}
