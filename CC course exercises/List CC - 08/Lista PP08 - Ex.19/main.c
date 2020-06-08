#include <stdio.h>
#include <stdlib.h>
#include <math.h>

double hiperfat(int n){
    if(n==1)
        return 1;
    else
        return pow(n,n)*hiperfat(n-1);
}

int main()
{
    int N;
    printf("\nDigite N: ");
    scanf("%d",&N);
    printf("\nHiperfat(%d): %.0lf",N,hiperfat(N));

    return 0;
}
