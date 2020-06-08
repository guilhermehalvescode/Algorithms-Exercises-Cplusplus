#include <stdio.h>
#include <stdlib.h>

struct aluno{
    int matricula,c,n1,n2;
    char nome[100];
    float mediaf;
};

int main()
{
    struct aluno a[2];
    int i;
    for(i=0;i<2;i++){
        printf("\n");
        printf("\nDigite a matricula do aluno %d: ",i+1);
        scanf("%d",&a[i].matricula);
        printf("\nDigite a nome do aluno %d: ",i+1);
        setbuf(stdin,NULL);
        fgets(a[i].nome,99,stdin);
        printf("\nDigite o codigo da displina do aluno %d: ",i+1);
        scanf("%d",&a[i].c);
        printf("\nDigite a nota da primeira prova do aluno %d: ",i+1);
        scanf("%d",&a[i].n1);
        printf("\nDigite a nota da segunda prova do aluno %d: ",i+1);
        scanf("%d",&a[i].n2);
        a[i].mediaf=(a[i].n1+a[i].n2*2)/3.0;
    }
    for(i=0;i<2;i++){
        printf("\n");
        printf("\nA matricula do aluno %d e: %d",i+1,a[i].matricula);
        printf("\nO nome do aluno %d e: %s",i+1,a[i].nome);
        printf("O codigo da displina do aluno %d e: %d",i+1,a[i].c);
        printf("\nA nota da primeira prova do aluno %d e: %d",i+1,a[i].n1);
        printf("\nA nota da segunda prova do aluno %d e: %d",i+1,a[i].n2);
        printf("\nA media das provas do aluno %d e: %.2f",i+1,a[i].mediaf);
    }
    return 0;
}
