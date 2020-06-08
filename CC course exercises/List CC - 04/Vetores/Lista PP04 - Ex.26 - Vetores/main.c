#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float v[10],m=0,dp=0;
    int i,n=10;
    for(i=0;i<10;i++){
        printf("\nDigite o valor do vetor no indice %d: ",i+1);
        scanf("%f",&v[i]);
        m+=v[i];
    }
    m=m/n;
    for(i=0;i<10;i++){
        dp+=(v[i]-m)*(v[i]-m);
    }
    dp=sqrt(dp/(n-1));
    printf("\nO desvio padrao do vetor e: %f",dp);
    return 0;
}
