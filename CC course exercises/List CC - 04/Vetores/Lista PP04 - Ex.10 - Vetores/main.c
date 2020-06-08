#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,c=0;
    float soma=0,v[15],x;
    for(i=0;i<15;i++){
        printf("Digite a nota %d: ",i+1);
        scanf("%f",&x);
        if(x<0 || x>10){
            printf("Valor errado!!\n");
            i--;
            continue;
        }
    v[i]=x;
    c++;
    soma+=v[i];
    }
    printf("A media geral e: %.2f\n",soma/c);
    return 0;
}

