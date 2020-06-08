#include <stdio.h>
#include <stdlib.h>

int main()
{
    int mat[5][5],i,j,x,l,c,check=0;
    for(i=0;i<5;i++){
        for(j=0;j<5;j++){
            printf("\nDigite um valor da matriz na linha %d e coluna %d: ",i+1,j+1);
            scanf("%d",&mat[i][j]);
        }
    }
    printf("\nDigite um valor de x: ");
    scanf("%d",&x);
    for(i=0;i<5;i++){
        for(j=0;j<5;j++){
            if(mat[i][j]==x){
                check=1;
                l=i+1;
                c=j+1;
            }
        }
    }
    if(check==1){
        printf("\nO valor digitado se encontra na linha %d e na coluna %d",l,c);
    }else
        printf("\nValor digitado nao encontrado na matriz!!");
    return 0;
}
