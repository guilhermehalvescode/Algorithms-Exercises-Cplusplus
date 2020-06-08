#include <stdio.h>
#include <stdlib.h>

int main()
{
    float salario_b,salario_r;
    printf("\nInforme o salario base do funcionario para calcular seu salario a receber:\n");
    scanf("%f",&salario_b);
    salario_r=(0.93*salario_b)+(0.05*salario_b);
    printf("\nO salario recebido pelo funcionario sera: %.2f",salario_r);
    return 0;
}
