#include <stdio.h>
#include <stdlib.h>

int main()
{
    int duracao_segundos,H,M,S;
    printf("Digite o valor em segundos para apresenta-lo em H:M:S:\n");
    scanf("%i",&duracao_segundos);
        H=duracao_segundos/3600;
        M=duracao_segundos/60;
        S=duracao_segundos%60;
    printf("As horas sao:\n%i:%i:%i",H,M,S);

    return 0;
}
