#include <stdio.h>
#include <stdlib.h>

int main()
{
    int H,M,S,duracao,duracao_S;
    printf("\nDescubra o horario em que sua expriencia biologica ira terminar:\n\nInforme o horario de inicio:\nH:M:S\n");
    scanf("%i:%i:%i",&H,&M,&S);
    printf("\nInforme a duracao dessa experencia em segundos:\n");
    scanf("%i",&duracao_S);
    duracao=((H*3600)+(M*60)+S)+duracao_S;
    H=duracao/3600;
    M=(duracao%3600)/60;
    S=(duracao%3600)%60;
    printf("\nO horario de termino de sua esperiencia biologica sera: %i:%i:%i!",H,M,S);
    return 0;
}
