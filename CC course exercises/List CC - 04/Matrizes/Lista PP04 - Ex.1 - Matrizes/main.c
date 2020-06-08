#include <stdio.h>
#include <stdlib.h>

int main()
{
    int v[4][4],i,j,c=0;
    for(i=0;i<4;i++){
        for(j=0;j<4;j++){
            printf("\nDigite um valor da matriz na linha %d e coluna %d: ",i+1,j+1);
            scanf("%d",&v[i][j]);
            if(v[i][j]>10)
                c++;
        }
    }
    printf("\n%d",c);
    return 0;
}

