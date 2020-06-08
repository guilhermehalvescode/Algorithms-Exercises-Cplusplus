#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x,y,z,R;
    printf("Digite tres numeros para soma-los, pressionando enter para cada numero digitado:\n");
    scanf("%i%i%i",&x,&y,&z);// digitar 3 numeros para associalos a uma variavel
    R = x+y+z;
    printf("A soma deu:%i",R);
    return 0;
}
