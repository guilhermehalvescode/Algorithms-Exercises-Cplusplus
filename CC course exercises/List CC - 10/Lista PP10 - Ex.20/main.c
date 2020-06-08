#include <stdio.h>
#include <stdlib.h>
#include <math.h>

struct info{
    char nome[50];
    float x,y;
};

typedef struct info truct;

float modulo(truct *city, int n, int c1, int c2){
    float r;
    r = sqrt(pow(city[c1].x-city[c2].x,2)+pow(city[c1].y-city[c2].y,2));
    return r;
}

int main()
{
    truct *cidades;
    int i,j,N;
    float **D;
    printf("\nDigite n: ");
    scanf("%d",&N);
    cidades = (truct*) malloc(N*sizeof(truct));
    for(i=0;i<N;i++){
        printf("\nDigite a nome da cidade %d: ",i+1);
        setbuf(stdin,NULL);
        gets(cidades[i].nome);
        printf("\nDigite x da cidade: ");
        scanf("%f",&cidades[i].x);
        printf("\nDigite y da cidade: ");
        scanf("%f",&cidades[i].y);
    }
    D=(float**) malloc(N*sizeof(float*));
    for(i=0;i<N;i++)
        D[i]=(float*) malloc(N*sizeof(float));
    for(i=0;i<N;i++){
        for(j=0;j<N;j++){
            D[i][j]=modulo(cidades,N,i,j);
        }
    }
    printf("\nA matriz de distancias e:\n");
    for(i=0;i<N;i++){
        for(j=0;j<N;j++)
            printf("[%.2f] ",D[i][j]);
        printf("\n");
    }
    return 0;
}
