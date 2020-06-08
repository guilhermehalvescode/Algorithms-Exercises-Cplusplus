#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,i,j;
    printf("\nDigite um valor n: ");
    scanf("%d",&n);
    float v[n][n];
    for(i=0;i<n;i++){
        for(j=0;j<=i;j++){
            if(j==0 || i==j){
                v[i][j]=1;
                printf("%.0f ",v[i][j]);
            }else{
                v[i][j]=(v[i-1][j-1])+(v[i-1][j]);
                printf("%.0f ",v[i][j]);
            }
        }
    printf("\n");
    }
    return 0;
}
