#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x,maior=0,menor=0,c=0;
    while(1){
        printf("Digite valores nao negativos:\n");
        scanf("%i",&x);
        if(x<0)
            break;
        if(c==0){
            maior=x;
            menor=x;
        }
        if(x>maior)
            maior=x;
        if(x<menor)
            menor=x;
        c=1;
    }
    printf("O menor valor digitado foi %i\nE o maior %i\n",menor,maior);
    return 0;
}
