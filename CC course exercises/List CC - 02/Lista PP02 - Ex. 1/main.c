#include <stdio.h>
#include <stdlib.h>

int main()
{
    float x,y;
    printf("Digite dois numeros: \"x e y\"\n");
    scanf("%f e %f",&x,&y);
    if (x>y){
        printf("%.1f e maior que %.1f",x,y);
        }else{
            if (x<y){
                printf("%.1f e maior que %.1f",y,x);
                }else{
                printf("%.1f e igual a %.1f",x,y);
                }
        }

    return 0;
}
