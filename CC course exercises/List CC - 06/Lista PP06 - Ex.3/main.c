#include <stdio.h>
#include <stdlib.h>

struct pessoa{
    char nome[100];
    int mat;
    char curso[100];
};

int main()
{
    int i;
    struct pessoa da[5];
    for(i=0;i<2;i++){
        printf("\nDigite o nome do aluno %d: ",i+1);
        setbuf(stdin,NULL);
        fgets(da[i].nome,99,stdin);
        printf("\nDigite a matricula do aluno %d: ",i+1);
        setbuf(stdin,NULL);
        scanf("%d",&da[i].mat);
        printf("\nDigite o curso do aluno %d: ",i+1);
        setbuf(stdin,NULL);        fgets(da[i].curso,99,stdin);
    }
    for(i=0;i<2;i++){
        printf("\n");
        printf("\nO nome do aluno %d: %s",i+1,da[i].nome);
        printf("\nA matricula do aluno %d: %d\n",i+1,da[i].mat);
        printf("\nO curso do aluno %d: %s",i+1,da[i].curso);
    }
    return 0;
}
