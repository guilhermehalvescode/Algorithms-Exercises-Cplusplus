#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a;
    double s=2000,aumento=0.015;
    for(a=1996;a<=2019;a++){
        s=s+(s*aumento);
        aumento=aumento*2;
    }
    printf("O valor do salario desse funcionario em 2019 e: %f\n",s);
    return 0;
}
