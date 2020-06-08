#include <stdio.h>
#include <stdlib.h>

int main()
{
    int nro,check,c=0;
    do{
    printf("\nDigite um numero inteiro positivo para mostrar todos seus divisores:\n");
    scanf("%i",&nro);
    }while(nro<=0);
    c=nro;
    while(c>0){
        c--;
        check=nro%c;
        if(check==0){
            printf("\n%i e um divisor desse numero!!\n",c);
        }
    }
    return 0;
}
