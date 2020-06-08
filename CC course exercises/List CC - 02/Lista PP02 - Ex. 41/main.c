#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    float peso,altura,IMC;
    printf("Calcule o seu IMC!\nDigite o seu peso em quilogramas:\n");
    scanf("%f",&peso);
    printf("Digite o sua altura em metros:\n");
    scanf("%f",&altura);
    IMC=(float)peso/pow(altura,2);
    if (IMC<18.6){
        printf("Sua e classificacao e abaixo do peso!\n");
    }else{
        if (IMC>=18.6 && IMC<25){
            printf("Sua e classificacao e saudavel\n");
        }else{
            if (IMC>=25.0 && IMC<30.0){
                printf("Sua e classificacao e peso em excesso\n");
            }else{
                if (IMC>=30.0 && IMC<35.0){
                    printf("Sua e classificacao obesidade grau I!\n");
                }else{
                    if (IMC>=35.0 && IMC<=39.9){
                        printf("Sua e classificacao obesidade grau II (severa)!\n");
                }else{
                    printf("Sua e classificaçao obesidade grau III (morbida)!\n");
                }
                }
            }
        }
    }
    return 0;
}
