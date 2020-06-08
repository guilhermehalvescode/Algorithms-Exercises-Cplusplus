#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float nro1,nro2,nro3,media_g,media_p,media_h,media_a;
    int escolha;
    printf("Digite tres numeros para fazer um tipo de media\nDigite o primeiro:\n");
    scanf("%f",&nro1);
    printf("Digite o segundo:\n");
    scanf("%f",&nro2);
    printf("Digite o terceiro:\n");
    scanf("%f",&nro3);
    printf("\nEscolha um dos numeros:\n1.Media Geometrica\n2.Media Ponderada\n3.Media Harmonica\n4.Media Artimetica\n");
    scanf("%i",&escolha);
    switch(escolha){
        case 1 : media_g=pow(nro1*nro3*nro3,1.0/3.0);
                 printf("O valor da media geometrica desses numeros e: %.2f",media_g); break;
        case 2 : media_p=((nro1)+(2*nro2)+(3*nro3))/6;
                 printf("O valor da media ponderada desses numeros e: %.2f",media_p); break;
        case 3 : media_h=3/((1/nro1)+(1/nro2)+(1/nro3));
                 printf("O valor da media harmonica desses numeros e: %.2f",media_h); break;
        case 4 : media_a=(nro1+nro2+nro3)/3;
                 printf("O valor da media aritmetica desses numeros e: %.2f",media_a); break;
        default: printf("O valor digitado nao e valido!!");
    }
    return 0;
}
