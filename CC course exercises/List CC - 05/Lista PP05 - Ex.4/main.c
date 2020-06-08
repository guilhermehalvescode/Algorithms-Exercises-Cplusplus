#include <stdio.h>
#include <stdlib.h>

int main()
{
    char str[10];
    int i;
    printf("\nDigite um nome: ");
    setbuf(stdin,(NULL));
    fgets(str,10,stdin);
    for(i=0;i<4;i++)
        printf("%c",str[i]);
    return 0;
}


