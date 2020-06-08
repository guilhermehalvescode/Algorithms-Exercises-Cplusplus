#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,v[10],maior,menor;
    for(i=0;i<10;i++){
        printf("Digite a coordenada de indice %d: ",i+1);
        scanf("%d",&v[i]);
        if(i==0){
        maior=v[0];
        menor=v[0];
        }
        if(v[i]>maior)
            maior=v[i];
        if(v[i]<menor)
            menor=v[i];
    }
    printf("\n\nO maior valor digitado foi: %d\n\nO menor valor digitado foi: %d\n",maior,menor);
    return 0;
}
