#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float x,raiz,elevate;
    printf("Digite um numero positivo:\n");
    scanf("%f",&x);
    if(x>0){
        raiz=sqrt(x);
        elevate=pow(x,2);
        printf("O valor da raiz desse numero e: %.2f\nO valor desse numero ao quadrado e: %.1f",raiz,elevate);
    }else{
        printf("Esse numero digitado nao e positivo!!");
    }
    return 0;
}
