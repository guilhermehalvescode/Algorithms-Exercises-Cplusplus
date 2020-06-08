#include <stdio.h>
#include <stdlib.h>

int main()
{
    float c=1.5,z=1.1;
    int a=0;
    while(z<=c){
        c=c+0.02;
        z=z+0.03;
        a++;
    }
    printf("Serao necessarios %i anos para Ze ser maior que Chico!\n",a);
    return 0;
}
