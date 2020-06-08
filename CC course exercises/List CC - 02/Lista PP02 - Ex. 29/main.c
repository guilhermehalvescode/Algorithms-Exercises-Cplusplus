#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int a,b,r,i,check,n=0;
    for(i=0;i<5;i++){
        srand((unsigned) time(NULL));
        a=(1)+(rand()%100);
        b=(1)+(rand()%100);
        r=a+b;
        printf("\nDigite a soma de %i+%i\n",a,b);
        scanf("%i",&check);
        if(check==r)
            n++;
        printf("\n\nA resposta correta dessa soma e: %i\n",r);
    }
    printf("Voce acertou %i vezes!\n",n);
    return 0;
}
