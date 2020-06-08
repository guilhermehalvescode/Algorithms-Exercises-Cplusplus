#include <stdio.h>
#include <stdlib.h>

int main()
{
    float v[10],soma=0;
    int i,n=0;
    for(i=0;i<10;i++){
        printf("Digite um valor real para a coordenada %d do vetor: ",i+1);
        scanf("%f",&v[i]);
        if(v[i]<0){
            n++;
        }
        if(v[i]>0){
            soma+=v[i];
        }
    }
    printf("\n\nForam digitados %d numeros negativos e a soma dos numeros positivos e: %.2f\n",n,soma);
    return 0;
}

