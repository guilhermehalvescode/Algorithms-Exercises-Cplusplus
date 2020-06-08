#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,j,p[5]={0,0,0,0,0};
    char r[5][10],gab[10];
    for(i=0;i<5;i++){
        for(j=0;j<10;j++){
            printf("\nDigite a resposta da questao %d do aluno %d: ",j+1,i+1);
            setbuf(stdin,NULL);
            scanf("%c",&r[i][j]);
        }

    printf("\n");
    }
    printf("\n");
    for(i=0;i<10;i++){
        printf("\nDigite o gabarito da questao %d: ",i+1);
        setbuf(stdin,NULL);
        scanf("%c",&gab[i]);
    }
    for(i=0;i<5;i++){
        for(j=0;j<10;j++){
            if(r[i][j]==gab[j])
                p[i]++;
        }
    }
    printf("\n");
    for(i=0;i<5;i++)
        printf("\nO aluno %d acertou %d questoes",i+1,p[i]);
    return 0;
}
