#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,n,c,y=0;
    printf("Digite um valor N:\n");
    scanf("%i",&n);
    for(i=1;i<=n;i++){
        for(c=1;c<=i;c++){
        y++;
        printf("%i ",y);
        }
    printf("\n");
    }
    return 0;
}
