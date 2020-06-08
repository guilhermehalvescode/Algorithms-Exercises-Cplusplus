#include <stdio.h>
#include <stdlib.h>

int main()
{
    int mat[3][3],v[3],i,j,soma;
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("\nDigite o valor em mat[%d][%d]: ",i+1,j+1);
            scanf("%d",&mat[i][j]);
        }
    printf("\n");
    }
    printf("\n");
    for(j=0;j<3;j++){
    soma=0;
        for(i=0;i<3;i++){
            soma+=mat[i][j];
        }
    v[j]=soma;
    }
    printf("\nO vetor formado e: ");
    for(i=0;i<3;i++){
        printf("[%d] ",v[i]);
    }
    return 0;
}

