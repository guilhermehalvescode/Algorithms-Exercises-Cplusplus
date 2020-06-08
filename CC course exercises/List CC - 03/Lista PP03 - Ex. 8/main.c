#include <stdio.h>
#include <stdlib.h>

int main()
{
    int contador=0;
    float nro,maior=-10000000000000000,menor=10000000000000000;
    printf("Digite 10 numeros para ver qual deles e menor e o maior!!\n");
    while(contador<10){
        printf("\nDigite um numero:\n");
        scanf("%f",&nro);
        if(nro<menor){
            menor=nro;
        }
        if(nro>maior){
            maior=nro;
        }
        contador++;
    }
    printf("O menor numero digitado e: %.2f\ne o maior e: %.2f",menor,maior);
    return 0;
}
