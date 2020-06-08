#include <stdio.h>
#include <stdlib.h>

int main()
{
    char nome[20],sexo;
    int idade,i;
    printf("\nDigite seu nome: ");
    setbuf(stdin,(NULL));
    gets(nome);
    do{
        printf("\nDigite seu sexo com 'f' ou 'm': ");
        setbuf(stdin,(NULL));
        sexo=getchar();
    }while(sexo!='f' && sexo!='F' && sexo!='M' && sexo!='m');
    printf("\nDigite sua idade: ");
    scanf("%d",&idade);
    if(sexo=='f'&& idade<25){
        printf("\n%s",nome);
        printf("\n ACEITA!");
    }else
        printf("\nNAO ACEITA!");
    return 0;
}
