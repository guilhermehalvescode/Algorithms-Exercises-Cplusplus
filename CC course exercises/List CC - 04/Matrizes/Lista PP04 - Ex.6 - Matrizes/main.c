#include <stdio.h>
#include <stdlib.h>

int main()
{
    int mat1[4][4],mat2[4][4],mat3[4][4],i,j;
    for(i=0;i<4;i++){
        for(j=0;j<4;j++){
            printf("\nDigite o valor de mat1[%d][%d]: ",i+1,j+1);
            scanf("%d",&mat1[i][j]);
            mat3[i][j]=mat1[i][j];
        }
    }
    for(i=0;i<4;i++){
        for(j=0;j<4;j++){
            printf("\nDigite o valor de mat2[%d][%d]: ",i+1,j+1);
            scanf("%d",&mat2[i][j]);
            if(mat2[i][j]>mat3[i][j])
                mat3[i][j]=mat2[i][j];
        }
    }
    printf("\nMat1:\n");
    for(i=0;i<4;i++){
        for(j=0;j<4;j++){
            printf("[%d] ",mat1[i][j]);
        }
    printf("\n");
    }
    printf("\nMat2:\n");
    for(i=0;i<4;i++){
        for(j=0;j<4;j++){
            printf("[%d] ",mat2[i][j]);
        }
    printf("\n");
    }
    printf("\nMat3:\n");
    for(i=0;i<4;i++){
        for(j=0;j<4;j++){
            printf("[%d] ",mat3[i][j]);
        }
    printf("\n");
    }
    return 0;
}
