#include <stdio.h>
#include <stdlib.h>

int main()
{
    int nro1,nro2;
    printf("Escreva dois numeros inteiros:\nDigite o primeiro:\n");
    scanf("%i",&nro1);
    printf("Digite o segundo:\n");
    scanf("%i",&nro2);
    if (nro1>nro2){
        printf("%i e o numero maior ",nro1);
        }else{
            if (nro1<nro2){
                    printf("%i e o numero maior",nro2);
            }else{
                printf("Os numeros sao iguais");
            }
        }
    return 0;
}
