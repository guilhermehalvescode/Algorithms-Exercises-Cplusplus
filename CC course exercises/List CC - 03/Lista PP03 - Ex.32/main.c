#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    int N,c=1,d1,d2;
    printf("Digite o valor N para fazer o lancamento N vezes de um dado:\n");
    scanf("%i",&N);
    srand((unsigned) time(NULL));
    while(c<=N){
        d1=1+(rand()%6);
        d2=1+(rand()%6);
        printf("\nO valor que saiu do dado 1 e: %i\n",d1);
        printf("\nO valor que saiu do dado 2 e: %i\n",d2);
        if(d1>d2){
            printf("\n %i e maior que %i\n",d1,d2);
        }else if(d1==d2){
            printf("\n %i e igual a %i\n",d1,d2);
        }else if(d1<d2){
            printf("\n %i e menor que %i\n",d1,d2);
        }
        c++;
    }
    return 0;
}
