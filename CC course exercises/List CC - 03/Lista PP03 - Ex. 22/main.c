#include <stdio.h>
#include <stdlib.h>

int main()
{
    float notas=0,qtdade=0,somatoria=0;
    do{
        if(notas>=10 && notas<=20){
            qtdade++;
        }
        somatoria+=notas;
        printf("Digite uma nota:\n");
        scanf("%f",&notas);
    }while(notas>=10 && notas<=20);
    printf("O valor da media aritmetica dessas notas e: %.2f",somatoria/qtdade);
    return 0;
}
