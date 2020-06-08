#include <stdio.h>
#include <stdlib.h>

int mdc(int x,int y){
    if(y%x==0)
        return x;
    else
        return mdc(y,x%y);
}

int main()
{
    int x,y;
    printf("\nDigite x: ");
    scanf("%d",&x);
    printf("\nDigite y: ");
    scanf("%d",&y);
    printf("%d",mdc(x,y));

    return 0;

}
