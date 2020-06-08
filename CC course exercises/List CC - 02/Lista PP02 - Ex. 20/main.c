#include <stdio.h>
#include <stdlib.h>

int main()
{
    float A,B,C;
    printf("Digite os valores de A, B e C para os lados de um triangulo!\nDigite A:\n");
    scanf("%f",&A);
    printf("Digite B:\n");
    scanf("%f",&B);
    printf("Digite C:\n");
    scanf("%f",&C);
    if(C<A+B && B<A+C && A<B+C){
        printf("Podem ser lados de um triangulo!\n");
        if(A==B && B==C && A==C){
            printf("Esse traingulo e equilatero!\n");
        }else if(A==B || B==C || A==C){
            printf("E isoceles!\n");
        }else if(A!=B && B!=C && A!=C){
            printf("E escaleno!\n");
        }
    }else{
        printf("Nao pode ser triangulo!\n");
    }
    return 0;
}
