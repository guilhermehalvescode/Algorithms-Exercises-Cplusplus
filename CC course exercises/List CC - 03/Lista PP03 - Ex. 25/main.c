#include <stdio.h>
#include <stdlib.h>

int main()
{
    int c,soma=0;
    for(c=0;c<1000;c++){
        if(c%3==0 || c%5==0){
            soma+=c;
        }
    }
    printf("O valor da soma desses numeros : %i",soma);
    return 0;
}
