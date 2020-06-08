#include <stdio.h>
#include <stdlib.h>

int main()
{
    float soma=0,fat=1;
    int num=0,x=0;
    while(num<4){
        num++;
        x=x+2;
        fat=fat*x*(x-1);
        soma+=num/fat;
    }

    printf("O valor dessa sequencia ate o 5 termo vale %f",soma);
    return 0;
}
