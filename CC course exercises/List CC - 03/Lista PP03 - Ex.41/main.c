#include <stdio.h>
#include <stdlib.h>

int main()
{
    float r,r_1,r_2;
    printf("Digite o valor de resistencias para calcular a resistencia equivalente dessas, digitando 0 para sair do programa\nDigite a primeira:\n");
    scanf("%f",&r);
    if(r==0){
        printf("A resistencia equivalente e: %.2f",r);
    }else{
        printf("Digite o valor da outra:\n");
        scanf("%f",&r_1);
        if(r_1==0){
            printf("A resistencia equivalente e: %.2f",r);
        }else{
            r_2=(r*r_1)/(r+r_1);
            while(1){
                printf("Digite a outra:\n");
                scanf("%f",&r);
                if(r==0)
                    break;
                r_2=(r_2*r)/(r_2+r);
            }
            printf("O valor da resistencia equivalente e: %.2f\n",r_2);
        }
    }
    return 0;
}
