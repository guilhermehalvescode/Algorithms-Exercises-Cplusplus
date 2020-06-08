#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x_idade,x_anoatual,a_nasc;
    printf("\nCalcule o seu ano de nascimento!\n\nInforme a sua idade:\n");
    scanf("%i",&x_idade);
    printf("\nInforme o ano atual:\n");
    scanf("%i",&x_anoatual);
    a_nasc=x_anoatual-x_idade;
    printf("\nO seu ano de nascimento e: %i",a_nasc);
    return 0;
}
