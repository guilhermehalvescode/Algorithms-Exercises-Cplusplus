#include <stdio.h>
#include <stdlib.h>

int main()
{
    int N,c;
    float H=0;
    printf("Digite um numero para fazer a serie harmonica ate esse valor:\n");
    scanf("%i",&N);
    for(c=1;c<=N;c++){
        H+=1.0/c;
    }
    printf("A serie harmonica e: %.1f",H);
    return 0;
}
