#include <stdio.h>
#include <stdlib.h>

void imprime(int *v){
    int i;
    printf("\n");
    for(i=0;i<5;i++)
        printf("[%d] ",v[i]);
}

int main()
{
    int i,*v;
    v=(int*)malloc(5*sizeof(int));
    for(i=0;i<5;i++){
        printf("\nDigite o valor de v[%d]:",i+1);
        scanf("%d",&v[i]);
    }
    imprime(v);
    free(v);
    printf("Hello world!\n");
    return 0;
}
