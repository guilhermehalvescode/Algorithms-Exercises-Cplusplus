#include <stdio.h>
#include <stdlib.h>

int main()
{
    int nro,contador=0,naturais=0;
    printf("Digite um valor N para mostrar essa quantidade em ordem crescente de numeros naturais:\n");
    scanf("%i",&nro);
    while(contador<nro){
        printf("%i\n",contador);
        contador++;
    }

    return 0;
}
