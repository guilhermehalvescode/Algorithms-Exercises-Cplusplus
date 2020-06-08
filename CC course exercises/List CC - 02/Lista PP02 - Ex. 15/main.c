#include <stdio.h>
#include <stdlib.h>

int main()
{
    int nro;
    printf("Digite um numero entre 1 e 7 para mostrar qual dia da semana esse numero representa:\n");
    scanf("%i",&nro);
    switch (nro){
        case 1 : printf("Segunda-Feira"); break;
        case 2 : printf("Terca-Feira"); break;
        case 3 : printf("Quarta-Feira"); break;
        case 4 : printf("Quinta-Feira"); break;
        case 5 : printf("Sexta-Feira"); break;
        case 6 : printf("Sabado"); break;
        case 7 : printf("Domingo"); break;
        default : printf("Voce digitou um numero invalido!\n");
    }
    return 0;

}
