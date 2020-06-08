#include <stdio.h>
#include <stdlib.h>

struct pessoa{
    char nome[100];
    int idade;
    char ender[100];

};

typedef struct pessoa st;
int main()
{
    st primeira;
    printf("\nDigite o nome da pessoa: ");
    setbuf(stdin,NULL);
    fgets(primeira.nome,99,stdin);
    printf("\nDigite a idade dessa: ");
    setbuf(stdin,NULL);
    scanf("%d",&primeira.idade);
    printf("\nDigite o endereco da pessoa: ");
    setbuf(stdin,NULL);    fgets(primeira.ender,99,stdin);
    printf("\nO nome digitado foi: ");
    fputs(primeira.nome,stdout);
    printf("\nA idade digitada foi: %d\n",primeira.idade);
    printf("\nO endereco digitado foi: %s",primeira.ender);

    return 0;
}
