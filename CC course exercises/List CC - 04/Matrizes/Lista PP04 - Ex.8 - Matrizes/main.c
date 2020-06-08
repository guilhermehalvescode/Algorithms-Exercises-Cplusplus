#include <stdio.h>
#include <stdlib.h>

int main()
{
    int mat[3][3],i,j,soma=0;
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("\nDigite o valor de mat[%d][%d]: ",i+1,j+1);
            scanf("%d",&mat[i][j]);
        }
    printf("\n");
    }
    i=0;
    for(i=0;i<2;i++){
        for(j=1;j<3;j++){
            if(i==0)
                soma+=mat[i][j];
            else{
                j=2;
                soma+=mat[i][j];
            }
        }
    }
    printf("\nA soma dos elementos acima da diagonal principal sao: %d",soma);
    return 0;
}

