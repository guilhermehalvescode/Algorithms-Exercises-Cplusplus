#include <stdio.h>
#include <stdlib.h>

int main()
{
    float primeiro_a,segundo_a,terceiro_a,valor_p,soma_apostada;
    printf("\nDescubra quanto tres amigos devem receber proporcionalmente ao valor que \napostaram na loteria:\n");
    printf("\nInforme o valor apostado pelo primeiro amigo:\n");
    scanf("%f",&primeiro_a);
    printf("\nPelo segundo amigo:\n");
    scanf("%f",&segundo_a);
    printf("\nPelo terceiro:\n");
    scanf("%f",&terceiro_a);

    soma_apostada= primeiro_a+segundo_a+terceiro_a;

    printf("\nInforme o valor do premio:\n");
    scanf("%f",&valor_p);

    float primeiro_r,segundo_r,terceiro_r;
    primeiro_r= (primeiro_a/soma_apostada)*valor_p;
    segundo_r= (segundo_a/soma_apostada)*valor_p;
    terceiro_r= (terceiro_a/soma_apostada)*valor_p;
    printf("\nO valor recebido pelo primeiro amigo sera:\n%.2f\nPelo segundo:\n%.2f\nPelo terceiro:\n%.2f",primeiro_r,segundo_r,terceiro_r);
    return 0;
}
