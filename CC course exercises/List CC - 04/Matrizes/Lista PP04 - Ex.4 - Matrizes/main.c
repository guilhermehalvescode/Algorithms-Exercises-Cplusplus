#include <stdio.h>
#include <stdlib.h>

int main()
{
    int mat[4][4],i,j,maior,l,c;
    for(i=0;i<4;i++){
        for(j=0;j<4;j++){
            printf("\nDigite o valor da matriz na linha %d e na coluna %d: ",i+1,j+1);
            scanf("%d",&mat[i][j]);
        }
    }
    maior=mat[0][0];
    l=1;
    c=1;
    for(i=0;i<4;i++){
        for(j=0;j<4;j++){
            if(mat[i][j]>maior){
                maior=mat[i][j];
                l=i+1;
                c=j+1;
            }
        }
    }
    printf("\n\n");
    for(i=0;i<4;i++){
        for(j=0;j<4;j++){
            printf("[%d] ",mat[i][j]);
        }
    printf("\n");
    }
    printf("\nA maior valor dessa matriz se encontra na linha %d e coluna %d!!\n",l,c);
    return 0;
}
