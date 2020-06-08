#include <stdio.h>
#include <stdlib.h>

int main()
{
    float custo_f,valor_c,comissao,imposto;
    printf("Descubra quanto o consumidor deve pagar!\nInforme o valor de custo:\n");
    scanf("%f",&custo_f);
    if (custo_f<=12000.00){
        comissao=0.05*custo_f;
        valor_c=custo_f+comissao;
        printf("O custo ao consumidor e: %.2f",valor_c);
    }else{
        if (custo_f>12000.00 && custo_f<25000.00){
            comissao=0.1*custo_f;
            imposto=0.15*custo_f;
            valor_c=custo_f+comissao+imposto;
            printf("O custo ao consumidor e: %.2f",valor_c);
        }else{
            comissao=0.15*custo_f;
            imposto=0.2*custo_f;
            valor_c=custo_f+comissao+imposto;
            printf("O custo ao consumidor e: %.2f",valor_c);
        }
    }
    return 0;
}
