#include <stdio.h>
#include <stdlib.h>

int main()
{
    int soma=0,contador=0,naturais_p=2;
    while (contador<50){
        soma+=naturais_p;
        naturais_p+=2;
        contador++;
    }
    printf("Soma: %i",soma);
    return 0;
}
