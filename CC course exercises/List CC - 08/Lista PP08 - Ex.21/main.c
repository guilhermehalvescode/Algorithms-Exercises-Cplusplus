#include <stdio.h>
#include <stdlib.h>

int fibo(int n){
    if(n==1)
        return 1;
    if(n==2)
        return 2;
    if(n>2)
        return 2*fibo(n-1)+3*fibo(n-2);
    if(n<=0)
        return NULL;
}


int main()
{
    int n;
    printf("\nDigite n: ");
    scanf("%d",&n);
    printf("fibo(%d): %d",n,fibo(n));
    return 0;
}
