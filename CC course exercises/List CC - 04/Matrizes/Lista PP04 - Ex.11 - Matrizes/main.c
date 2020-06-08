#include <stdio.h>
#include <stdlib.h>

int main()
{
    int soma=0,mat[3][3],i,j;
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("\nDigite o valor em mat[%d][%d]: ",i+1,j+1);
            scanf("%d",&mat[i][j]);
        }
    }
    j=0;
    for(i=2;i>=0;i--){
        soma+=mat[i][j];
        j++;
    }
    printf("\nA soma e: %d",soma);
    return 0;
}
