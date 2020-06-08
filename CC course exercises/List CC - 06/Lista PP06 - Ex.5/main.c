#include <stdio.h>
#include <stdlib.h>

struct vetor{
 float x,y,z;
};


int main()
{
    struct vetor v[2];
    int i,j=120;
    float w[3];
    for(i=0;i<2;i++){
        printf("\nDigite a coordenada x do vetor %d: ",i+1);
        scanf("%f",&v[i].x);
        printf("\nDigite a coordenada y do vetor %d: ",i+1);
        scanf("%f",&v[i].y);
        printf("\nDigite a coordenada z do vetor %d: ",i+1);
        scanf("%f",&v[i].z);
    }
    w[0]=v[0].x+v[1].x;
    w[1]=v[0].y+v[1].y;
    w[2]=v[0].z+v[1].z;
    printf("\nO vetor formado e: (%.1f,%.1f,%.1f)",w[0],w[1],w[2]);
    return 0;
}
