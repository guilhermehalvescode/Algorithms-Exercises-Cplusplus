#include <stdio.h>
#include <stdlib.h>

int main()
{
    int contador=0,resultado,valor=3;
    while (contador<6){
        contador++;
        resultado=valor*contador;
        printf("%i\n",resultado);
    }
    return 0;
}
