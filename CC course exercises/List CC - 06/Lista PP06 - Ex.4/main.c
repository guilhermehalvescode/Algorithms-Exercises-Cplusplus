#include <stdio.h>
#include <stdlib.h>


struct curso{
    int matricula,pr1,pr2,pr3;
    float media;
    char nome[100];
};

int main()
{
    int i,maior_nota,a,maior_media,b,menor_media,c;
    struct curso aluno[5];
    for(i=0;i<5;i++){
        printf("\nDigite a matricula do aluno %d: ",i+1);
        scanf("%d",&aluno[i].matricula);
        printf("\nDigite o nome do aluno %d: ",i+1);
        setbuf(stdin,NULL);
        fgets(aluno[i].nome,99,stdin);
        printf("\nDigite a nota da primeira prova do aluno %d: ",i+1);
        scanf("%d",&aluno[i].pr1);
        printf("\nDigite a nota da segunda prova do aluno %d: ",i+1);
        scanf("%d",&aluno[i].pr2);
        printf("\nDigite a nota da terceira prova do aluno %d: ",i+1);
        scanf("%d",&aluno[i].pr3);
        aluno[i].media=(aluno[i].pr1+aluno[i].pr2+aluno[i].pr3)/3.0;
    }
    for(i=0;i<5;i++){
        if(i==0){
            maior_nota=aluno[i].pr1;
            a=i;
            maior_media=aluno[i].media;
            b=i;
            menor_media=aluno[i].media;            c=i;
        }
        if(aluno[i].pr1>maior_nota){
            maior_nota=aluno[i].pr1;            a=i;
        }
        if(aluno[i].media>maior_media){
            maior_media=aluno[i].media;
            b=i;
        }
        if(aluno[i].media<menor_media){
            menor_media=aluno[i].media;
            c=i;
        }
    }
    printf("\nO aluno com maior nota na primeira prova e: %s\nO aluno com maior media geral e: %s\nE o aluno com menor media geral e: %s",aluno[a].nome,aluno[b].nome,aluno[c].nome);
    for(i=0;i<5;i++){
        aluno[i].nome[strlen(aluno[i].nome)-1]='\0';
        if(aluno[i].media>=6)
            printf("\nO aluno %s foi aprovado",aluno[i].nome);
        else
            printf("\nO aluno %s nao foi aprovado",aluno[i].nome);
    }
    return 0;
}
