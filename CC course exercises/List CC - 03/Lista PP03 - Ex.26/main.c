#include <stdio.h>
#include <stdlib.h>

int main()
{
    int nro;
    printf("Digite um numero:\n");
    scanf("%i",&nro);
    while(1){
        if(nro%11==0){
            printf("O valor do primeiro multiplo achado depois de 11 e: %i",nro);
            break;
        }
        if(nro%13==0){
            printf("O valor do primeiro multiplo achado depois de 13 e: %i",nro);
            break;
        }
        if(nro%17==0){
            printf("O valor do primeiro multiplo achado depois de 17 e: %i",nro);
            break;
        }
        nro++;
    }
    return 0;
}
