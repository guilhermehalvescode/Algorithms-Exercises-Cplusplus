#include <stdio.h>
#include <stdlib.h>

int main()
{
    float nota1,nota2,media;
    printf("Digite as duas notas (valor entre 0 e 10) de um aluno para fazer uma media delas:\nDigite a primeira nota:\n");
    scanf("%f",&nota1);
    printf("Digite a segunda nota:\n");
    scanf("%f",&nota2);
    if ((nota1>=0.0 && nota1<=10.0)&&(nota2>=0.0 && nota2<=10.0)){
        media=(nota1+nota2)/2;
        printf("O valor da media dessas notas e: %.1f",media);
    }else{
        printf("Essas notas nao possuem um valor valido\nFim do programa!");
    }
    return 0;
}
