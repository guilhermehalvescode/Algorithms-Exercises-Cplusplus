#include <stdio.h>
#include <stdlib.h>

int main()
{
    int check,x,y,soma=0,mult=0;
    printf("Digite um numero\n");
    scanf("%i",&x);
    printf("Digite outro numero\n");
    scanf("%i",&y);
    soma=0;
    mult=1;
    if(x>=y){
        while(y<=x){
            if(y%2==0){
                soma+=y;
            }else{
                mult=mult*y;
            }
            y++;
        }
    }else if(x<y){
        while(y>=x){
            if(x%2==0){
                soma+=x;
            }else{
                mult=mult*x;
            }
            x++;
        }
    }
    printf("O valor da soma desse numeros pares entre esse intervalo junto com os proprios numeros digitados e: %i\n",soma);
    printf("O valor da multiplicacao desse numeros digitados com os valores impares entre esse intervalo e: %i",mult);
    return 0;
}
