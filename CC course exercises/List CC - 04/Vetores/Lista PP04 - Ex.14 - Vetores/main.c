#include <stdio.h>
#include <stdlib.h>

int main()
{
    float v[10],r[10];
    int i,j,qtd=0,k,achou;
    for(i=0;i<10;i++){
        printf("\nDigite um valor do vetor no indice %d: ",i+1);
        scanf("%f",&v[i]);
    }
    for(i=0;i<10;i++){
        for(j=i+1;j<10;j++){
            if(v[i]==v[j]){
                achou=0;
                for(k=0;k<qtd;k++){
                    achou=0;
                        if(v[i]==r[k]){
                        achou=1;
                        break;
                        }
                }
                if(achou==0){
                    r[qtd]=v[i];
                    qtd++;
                }
            }
        }
    }
    for(k=0;k<qtd;k++){
        printf("\nRepetidos: %.2f",r[k]);
    }
    return 0;
}


