#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int t[4][4],mat[4][4],i,j;
    srand(time(NULL));
    for(i=0;i<4;i++){
        for(j=0;j<4;j++){
            mat[i][j]=1+rand()%20;
            if(j>i)
                t[i][j]=0;
            else
                t[i][j]=mat[i][j];
        }
    }
    printf("\nA matriz original e:\n\n");
    for(i=0;i<4;i++){
        for(j=0;j<4;j++)
            printf("[%d] ",mat[i][j]);
    printf("\n");
    }
    printf("\nA matriz transformada e:\n\n");
    for(i=0;i<4;i++){
        for(j=0;j<4;j++)
            printf("[%d] ",t[i][j]);
    printf("\n");
    }
    return 0;
}
