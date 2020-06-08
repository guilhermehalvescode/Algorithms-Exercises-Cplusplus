#include <stdio.h>
#include <stdlib.h>

int main()
{
    float v,r;
    int t;
    printf("Digite o valor do salario\n");
    scanf("%f",&v);
    printf("Digite o tempo de servico:\n");
    scanf("%i",&t);
    if(v<=500){
        r=v*1.25;
    }else if(v<=1000){
        r=v*1.2;
    }else if(v<=1500){
        r=v*1.15;
    }else if(v<=2000){
        r=v*1.1;
    }else{
        r=v;
    }
    if(t>=1 && t<=3){
        r+=100;
    }else if(t>=4 && t<=6){
        r+=200;
    }else if(t>=7 && t<=10){
        r+=300;
    }else if(t>10){
        r+=500;
    }
    printf("O valor do salario com reajuste e: %.2f\n",r);
    return 0;
}
