#include <stdio.h>
#include <stdlib.h>

int main()
{
    float media,nota1,nota2,nota3;
    printf("Digite o valor da nota de tres provas para ver se vc foi aprovado!\n\nDigite a primeira nota:\n");
    scanf("%f",&nota1);
    printf("Digite a segunda nota:\n");
    scanf("%f",&nota2);
    printf("Digite a terceira nota:\n");
    scanf("%f",&nota3);
    media=((nota1)+(nota2)+(nota3*2))/4;
    if (media>=60){
    printf("Voce foi aprovado com media de %.2f!",media);
    }else{
    printf("Voce nao foi aprovado com media de %.2f!",media);
    }
    return 0;
}
