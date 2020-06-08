#include <stdio.h>
#include <stdlib.h>

int main()
{
    float v[5];
    int i,c;
    for(i=0;i<5;i++){
        printf("\nDigite o valor do vetor no indice %d: ",i+1);
        scanf("%f",&v[i]);
    }
    printf("\nDigite um código: ");
    scanf("%d",&c);
    if(c!=0){
        switch(c){
            case 1: printf("\nO vetor na forma direta e: ");
                    for(i=0;i<5;i++)
                        printf("[%.2f] ",v[i]);
                    break;

            case 2: printf("\nO vetor na forma inversa e: ");
                    for(i=4;i>=0;i--)
                        printf("[%.2f] ",v[i]);
                    break;
            default:printf("\nCodigo digitado invalido!!");
                    break;
        }
    }else{
        printf("\nPrograma finalizado!!");
    }
    return 0;
}
