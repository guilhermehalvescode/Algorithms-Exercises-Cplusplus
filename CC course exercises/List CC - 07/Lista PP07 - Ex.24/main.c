#include <stdio.h>
#include <stdlib.h>

void triangulo(int l){
    int i,j,esp=l-1;
    for(i=1;i<=l;i++){
       for(j=1;j<=esp;j++)
        printf(" ");
       for(j=1;j<=2*i-1;j++)
        printf("*");
       printf("\n");
       esp--;
    }
}
int main()
{
    int n;
    printf("\nDigite n:");
    scanf("%d",&n);
    triangulo(n);
    return 0;
}
