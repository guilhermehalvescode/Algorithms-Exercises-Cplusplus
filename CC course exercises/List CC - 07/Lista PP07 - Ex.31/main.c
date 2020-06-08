#include <stdio.h>
#include <stdlib.h>

int fat(int f){
    if(f==0)
        return 1;
    else
        return f*fat(f-1);
}

double serie(int e){
   int i;
   double r=0;
   for(i=0;i<=e;i++)
        r+=1.0/fat(i);
    return r;
}

int main()
{
    int n;
    printf("\nDigite n: ");
    scanf("%d",&n);
    printf("\nSerie: %f",serie(n));
    return 0;
}
