#include <stdio.h>
#include <stdlib.h>

struct registro{
    char sobrenome[50];
    int ano,matricula;
};

typedef struct registro classe;

void entrada(classe *truct, int n){
    int i;
    for(i=0;i<n;i++){
        printf("\nDigite a matricula do aluno %d: ",i+1);
        scanf("%d",&truct[i].matricula);
        printf("\nAno: ");
        scanf("%d",&truct[i].ano);
        printf("\nNome: ");
        setbuf(stdin,NULL);
        gets(truct[i].sobrenome);
    }
}

void imprime(classe *truct, int n){
        int i;
        for(i=0;i<n;i++){
            printf("\nA matricula do aluno %d: %d",i+1,truct[i].matricula);
            printf("\nAno: %d",truct[i].ano);
            printf("\nNome: %s",truct[i].sobrenome);
        }
}
int main()
{
    int N;
    classe *alunos;
    scanf("%d",&N);
    alunos = (classe*) malloc(N*sizeof(classe));
    entrada(alunos,N);
    imprime(alunos,N);
    free(alunos);
    return 0;
}
