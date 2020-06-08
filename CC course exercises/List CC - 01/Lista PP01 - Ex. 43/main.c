#include <stdio.h>
#include <stdlib.h>

int main()
{
    float valor_t,valor_d,valor_p,valor_comissaoavista,valor_comissaoparcelada;
    printf("\nInforme o valor total para receber informacoes sobre o valor com desconto, da parcela e da comissao:\n");
    scanf("%f",&valor_t);
    valor_d=(valor_t*0.9);
    printf("\nO valor total com 10 por cento de desconto e: %.2f\n",valor_d);
    valor_p=valor_t/3;
    printf("\nO valor de cada parcela em um parcelamento de 3x: %.2f\n",valor_p);
    valor_comissaoavista=0.05*(valor_d);
    printf("\nO valor da comissao do vendedor, se a venda for a vista e com desconto sera: %.2f\n",valor_comissaoavista);
    valor_comissaoparcelada=0.05*(valor_t);
    printf("\nO valor da comissao do vendedor, se a venda for parcelada em 3x sera: %.2f\n",valor_comissaoparcelada);
    return 0;
}
