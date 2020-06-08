#include <stdio.h>
#include <stdlib.h>

int main()
{
    float x,y,r; int e;
    printf("Digite dois numeros!\nDigite x:\n");
    scanf("%f",&x);
    printf("Digite y:\n");
    scanf("%f",&y);
    do{
        printf("\nEscolha uma opcao para fazer algo com esses numeros!\nAdicao(1)\nSubtracao(2)\nMultiplicacao(3)\nDivisao(4)\nSair(5)\n");
        scanf("%i",&e);
        switch(e){
            case 1:r=x+y;
                   printf("O resultado e: %.2f\n",r);
                   break;
            case 2:r=x-y;
                   printf("O resultado e: %.2f\n",r);
                   break;
            case 3:r=x*y;
                   printf("O resultado e: %.2f\n",r);
                   break;
            case 4:r=x/y;
                   printf("O resultado e: %.2f\n",r);
                   break;
            case 5:printf("\nSaiu do programa!\n");
                   break;
        }
    }while(e!=5);
    return 0;
}
