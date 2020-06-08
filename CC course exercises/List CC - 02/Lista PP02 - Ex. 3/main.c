#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    float R,root,eleva2;
    printf("Digite um numero:\n");
    scanf("%f",&R);
    if (R>=0){
        root=sqrt(R);
        printf("O valor da raiz quadrada desse numero e: %.2f",root);
    }else{
        eleva2= pow(R,2);
        printf("O valor desse numero ao quadrado e: %.2f",eleva2);
    }
    return 0;
}
