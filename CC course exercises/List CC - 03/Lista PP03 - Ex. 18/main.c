#include <stdio.h>
#include <stdlib.h>

int main()
{
    int N,loop,nro,nrom,contador=1;
    printf("Digite a quantidade de numeros a serem lidos:\n");
    scanf("%i",&N);
    printf("Digite um dos numeros:\n");
    scanf("%i",&nrom);
    for(loop=1;loop<N;loop++){
        printf("Digite um dos numeros:\n");
        scanf("%i",&nro);
        if(nro>nrom){
            nrom=nro;
        }else if (nro==nrom){
                        contador++;
        }

    }
    printf("O maior numero lido e: %i\nE esse numero foi lido %i vezes",nrom,contador);

    return 0;
}
