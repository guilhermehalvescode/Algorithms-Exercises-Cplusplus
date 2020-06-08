#include <stdio.h>
#include <stdlib.h>

int main()
{
    float salario,emprestimo;
    printf("Informe o valor do do salario de um trabalhador e o valor da prestacao de um emprestimo:\nDigite o valor do salario:\n");
    scanf("%f",&salario);
    printf("Digite o valor da prestacao do emprestimo:\n");
    scanf("%f",&emprestimo);
    if (emprestimo<=(0.2*salario)){
            printf("Emprestimo concedido!");
    }else{
        printf("Emprestimo nao concedido!");
    }
    return 0;
}
