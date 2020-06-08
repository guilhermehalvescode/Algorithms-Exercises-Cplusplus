#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,t;
    printf("Veja se pode receber aposentadoria ou nao!\nDigite a idade:\n");
    scanf("%i",&i);
    printf("Digite o tempo de servico em anos:\n");
    scanf("%i",&t);
    if(i>=65 || t>=30 || (i>=60 && t>=25)){
        printf("Tem condicoes para receber aposentadoria!\n");
    }else{
        printf("Nao tem condicoes para aposentadoria!\n");
    }
    return 0;
}
