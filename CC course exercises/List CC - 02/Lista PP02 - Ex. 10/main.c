#include <stdio.h>
#include <stdlib.h>

int main()
{
    float h,pesoideal_M,pesoideal_F;
    char sexo;
    printf("Descubra seu peso ideal!\nInforme sua altura:\n");
    scanf("%f",&h);
    printf("Informe seu sexo digitando m ou f:\n");
    setbuf(stdin,NULL);
    sexo=getchar();
    if (sexo=='m'){
            pesoideal_M=(72.7*h)-58;
            printf("O peso ideal para voce homem e: %.1f",pesoideal_M);
    }else{
        if(sexo=='f'){
            pesoideal_F=(62.1*h)-44.7;
            printf("O peso ideal para voce mulher e: %.1f",pesoideal_F);
        }else{
            printf("Voce digitou o sexo errado!\nFim do Programa!\n");
        }

    }

    return 0;
}
