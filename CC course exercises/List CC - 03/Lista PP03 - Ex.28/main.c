#include <stdio.h>
#include <stdlib.h>

int main()
{
    int N,c,fat=1;
    float E=1;
    printf("Digite um numero N:\n");
    scanf("%i",&N);
    for(c=1;c<=N;c++){
        fat=fat*c;
        E+=1.0/fat;
    }
    printf("O valor da formula E e: %.1f\n",E);
    return 0;
}
