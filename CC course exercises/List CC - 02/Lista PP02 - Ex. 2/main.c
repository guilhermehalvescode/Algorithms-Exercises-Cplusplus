#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    float nro,root;
    printf("Digite um numero:\n");
    scanf("%f",&nro);
    if (nro>=0){
            root=sqrt(nro);
            printf ("A raiz desse numero e: %.3f",root);
    }else{
        printf("O numero digitado e invalido!");
    }


    return 0;
}
