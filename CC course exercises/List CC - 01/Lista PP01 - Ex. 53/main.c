#include <stdio.h>
#include <stdlib.h>

int main()
{
    float c,l,p,resultado_p;
    printf("\n\nCalcule o preco do cercamento de seu terreno!\n");
    printf("\nInforme o comprimento do terreno em metros:\n");
    scanf("%f",&c);
    printf("\nInforme a largura do terreno em metros:\n");
    scanf("%f",&l);
    printf("\nInforme o preco do metro de tela em Reais/metro:\n");
    scanf("%f",&p);
    resultado_p=((2*l)+(2*c))*p;
    printf("\nO valor total do cercamento sera de: %.2f reais!\n",resultado_p);
    return 0;
}
