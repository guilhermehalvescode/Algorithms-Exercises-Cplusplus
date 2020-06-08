#include <stdio.h>
#include <stdlib.h>
#include <math.h>

struct polar{
    float r,a;
};

struct carte{
    float x,y;
};

int main()
{

    struct polar p;
    struct carte c;
    printf("\nDigite o raio da coordenada polar: ");
    scanf("%f",&p.r);
    printf("\nDigite o argumento/ angulo da coordenada polar em radianos: pi*");
    scanf("%f",&p.a);
    p.a=3.14159265359*p.a;
    c.x=cos(p.a)*p.r;
    c.y=sin(p.a)*p.r;
    printf("\nA respectiva coordenada cartesinada desse ponto polar e: (%.2f,%.2f)",c.x,c.y);
    return 0;
}
