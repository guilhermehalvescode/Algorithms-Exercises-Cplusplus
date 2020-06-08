#include <stdio.h>
#include <stdlib.h>

int main()
{
    int A,*B,**C,***D;
    printf("\nDigite A: ");
    scanf("%d",&A);
    B=&A;
    printf("\nDobro: %d",2*(*B));
    C=&B;
    printf("\nTriplo: %d",3*(**C));
    D=&C;
    printf("\nQuadradruplo: %d",4*(***D));
    return 0;
}
