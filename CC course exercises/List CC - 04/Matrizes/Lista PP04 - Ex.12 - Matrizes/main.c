#include <stdio.h>
#include <stdlib.h>

int main()
{
    int t[3][3],mat[3][3],i,j;
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("\nDigite o valor em mat[%d][%d]: ",i+1,j+1);
            scanf("%d",&mat[i][j]);
            t[j][i]=mat[i][j];
        }
    }
    printf("\n");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++)
            printf("[%d] ",t[i][j]);
    printf("\n");
    }
    printf("\n");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++)
            printf("[%d] ",mat[j][i]);
        printf("\n");
    }
    return 0;
}
