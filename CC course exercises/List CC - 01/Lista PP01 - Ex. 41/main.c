#include <stdio.h>
#include <stdlib.h>

int main()
{
    float v_t,h_t,v_p;
    printf("Informe o valor da hora de trabalho do funcionario em reais:\n");
    scanf("%f",&v_t);
    printf("Informe o o numero de horas de trabalho do funcionario no mes:\n");
    scanf("%f",&h_t);
    v_p=1.1*(v_t*h_t);
    printf("O valor a ser pago sera de: %.2f\n",v_p);
    return 0;
}
