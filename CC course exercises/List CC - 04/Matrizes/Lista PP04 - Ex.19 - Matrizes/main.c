#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,j,aluno;
    float media,maior,mat[5][4];
    for(i=0;i<5;i++){
        printf("\nDigite o numero de matricula do aluno %d: ",i+1);
        scanf("%f",&mat[i][0]);
    }
    for(i=0;i<5;i++){
        printf("\nDigite a media das provas do aluno %d: ",i+1);
        scanf("%f",&mat[i][1]);
        media+=mat[i][1];
    }
    for(i=0;i<5;i++){
        printf("\nDigite a media dos trabalhos do aluno %d: ",i+1);
        scanf("%f",&mat[i][2]);
    }
    for(i=0;i<5;i++){
        media=mat[i][1]+mat[i][2];
        mat[i][3]=media/2.0;
    }
    maior=mat[0][3];
    aluno=mat[0][0];
    for(i=0;i<5;i++){
        if(mat[i][3]>maior){
            maior=mat[i][3];
            aluno=mat[i][0];
        }
    }
    media=0;
    for(i=0;i<5;i++){
       media+=mat[i][3];
    }
    printf("\nA matricula do aluno com nota final maior e: %d",aluno);
    printf("\nA media aritmetica das notas finais e: %.2f",media/5.0);
    return 0;
}
