#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    float a,b,h;
    printf("Sejam a e b os catetos de um triangulo:\n\nInforme o valor de a e b para descobrir o valor da hipotenusa:\n\"a e b\"\n");
    scanf ("%f e %f",&a,&b);
    h=sqrt(pow(a,2)+pow(b,2));
    printf("O valor da hipotenusa a partir desses catetos e: %.2f",h);
    return 0;
}
