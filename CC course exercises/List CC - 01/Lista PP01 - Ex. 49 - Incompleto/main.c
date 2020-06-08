#include <stdio.h>
#include <stdlib.h>

int main()
{
    int H,M,S,duracao_S;
    printf("\nDescubra o horario em que sua expriencia biologica ira terminar:\n\nInforme o horario de inicio:\nH:M:S\n");
    scanf("%i:%i:%i",&H,&M,&S);
    printf("\nInforme a duracao dessa experencia em segundos:\n");
    scanf("%i",&duracao_S);
    H=H+duracao_S/3600;
    M=M+duracao_S/60;
    S=S+duracao_S%60;
    printf("\nO horario de termino de sua esperiencia biologica sera: %i:%i:%i!",H,M,S);
    return 0;
}
