#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    float a,b,c,delta,r_1,r_2;
    printf ("Calcule as raizes de uma equacao quadratica de forma: ax^2+bx+c\n\nInforme o valor do coeficiente a:\n");
    scanf("%f",&a);
    printf("Informe o valor do coeficiente b:\n");
    scanf("%f",&b);
    printf("Informe o valor do coeficiente c:\n");
    scanf("%f",&c);
    delta=(b*b)-(4*a*c);
    if(delta>0 && a!=0){
            r_1=(-b+sqrt(delta))/(2*a);
            r_2=(-b-sqrt(delta))/(2*a);
            printf ("O valor das raizes dessa equacao sera:\nr1: %.2f\nr2: %.2f\n",r_1,r_2);
        }else{
            if(delta==0 && a!=0){
                r_1=(unsigned)(-b)/(2*a);
                printf("O valor da raiz unica dessa equacao e:\nr: %.2f\n",r_1);
            }else if(a==0){
                printf("O coeficiente a nao pode ser zero!!\n");
            }else{
                printf("Nao existem raizes reais para x!\n");
            }
        }
    system("pause");
    return 0;
}
