#include <stdio.h>
#include <stdlib.h>

int main()
{
    int v[10],x[10],i=0,d=0;
    while(i<10){
        printf("\nDigite um valor para o vetor na posicao %d dentro do intevalo [0,50]: ",i+1);
        scanf("%d",&v[i]);
        if(v[i]>0 && v[i]<=50)
            i++;
    }
    for(i=0;i<10;i++){
        if(v[i]%2!=0){
            x[d]=v[i];
            d++;
        }

    }
    printf("\nO vetor digitado foi:\n");
    for(i=0;i<10;i++){
        if(i%2==0)
            printf("[%d] ",v[i]);
        else
            printf("[%d]\n",v[i]);
    }
    printf("\nO vetor com os valores impares e:\n");
    for(i=0;i<d;i++){
        if(i%2==0)
            printf("[%d] ",x[i]);
        else
        printf("[%d]\n",x[i]);
    }
    return 0;
}
