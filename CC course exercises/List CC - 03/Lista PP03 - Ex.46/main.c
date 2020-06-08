#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int nro,x,c=0;
    srand((unsigned) time(NULL));
    nro=(1)+(rand()%1000);
    while(1){
        printf("Digite o valor sorteado entre 1 e 1000:\n");
        scanf("%i",&x);
        if(x==nro)
            break;
        c++;
        if(x>nro)
            printf("O numero sorteado e menor que esse!!!\n");
        if(x<nro)
            printf("O numero sorteado e maior que esse!!!\n");
    }
    printf("\n\nVoce acertou!\n\nO numero foi descoberto em %i tentativas",c);
    return 0;
}
