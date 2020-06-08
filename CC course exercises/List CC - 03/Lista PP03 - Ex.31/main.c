#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x=1,y=1;
    float S=0;
    while(x<=99 && y<=50){
        S+=(float)x/y;
        x+=2;
        y++;
    }
    printf("O valor da soma e: %.2f",S);
    return 0;
}
