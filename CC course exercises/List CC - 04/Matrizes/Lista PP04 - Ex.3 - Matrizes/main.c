#include <stdio.h>
#include <stdlib.h>

int main()
{
    int mat[4][4],i,j;
    for(i=0;i<4;i++){
        for(j=0;j<4;j++){
            mat[i][j]=(i+1)*(j+1);
        }
    }
    for(i=0;i<4;i++){
        for(j=0;j<4;j++){
            printf("[%d] ",mat[i][j]);
        }
    printf("\n");
    }

    return 0;
}
