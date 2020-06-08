#include <stdio.h>
#include <stdlib.h>

int main()
{
    int v[10],i,c=0;
    for(i=0;i<10;i++){
        printf("Digite uma coordenada do indice %d: ",i+1);
        scanf("%d",&v[i]);
        if(v[i]%2==0){
            c++;
        }
    }
    printf("Voce digitou %d numeros pares!!\n",c);
    return 0;
}
