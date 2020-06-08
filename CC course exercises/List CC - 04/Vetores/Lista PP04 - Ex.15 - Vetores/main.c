#include <stdio.h>
#include <stdlib.h>

int main()
{
    int v[5],r[5],i,j,check,qtdade=0;
    for(i=0;i<5;i++){
        printf("\nDigite o valor do vetor no indice %d: ",i+1);
        scanf("%d",&v[i]);
    }
    for(i=0;i<5;i++){
    check=0;
        for(j=0;j<qtdade;j++){
            if(v[i]==r[j]){
                check=1;
                break;
            }
        }

        if(check==0){
            r[qtdade]=v[i];
            qtdade++;
        }
    }
    printf("\nOs valores nao repetidos desse vetor sao!\n");
    for(j=0;j<qtdade;j++){
        printf("[%d] ",r[j]);
    }
    return 0;
}
