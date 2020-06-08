#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int raizes(float A,float B,float C,float *X1,float *X2){
    float delta;
    delta=pow(B,2)-(4*A*C);
    if(delta>0){
        *X1=(-B+sqrt(delta))/(2.0*A);
        *X2=(-B-sqrt(delta))/(2.0*A);
        return 2;
    }
    if(delta==0){
        *X1=-B/2*A;
        return 1;
    }
    if(delta<0)
        return 0;
}

int main()
{
    float A,B,C,X1,X2;
    int r;
    printf("Implemente uma funcao que calcule as raizes de˜ uma equacao do segundo grau do tipo ˜Ax2 + Bx + C = 0: ");
    scanf("%f",&A);
    scanf("%f",&B);
    scanf("%f",&C);
    r = raizes(A,B,C,&X1,&X2);
    switch (r){
        case 0: printf("Sem raizes reais");
                break;
        case 1: printf("Uma raiz: %.2f",X1);
                break;
        case 2: printf("Duas raizes: %.2f %.2f",X1,X2);
                break;
    }
    return 0;
}
