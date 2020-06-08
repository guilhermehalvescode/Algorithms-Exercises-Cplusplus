#include <stdio.h>
#include <stdlib.h>

int main()
{
    int A[6]={1,0,5,-2,-5,7},soma=0,i;
    soma=A[0]+A[1]+A[5];
    printf("\nSoma: %d\n",soma);
    A[4]=100;
    for(i=0;i<6;i++){
        printf("\n%d\n",A[i]);
    }

    return 0;
}
