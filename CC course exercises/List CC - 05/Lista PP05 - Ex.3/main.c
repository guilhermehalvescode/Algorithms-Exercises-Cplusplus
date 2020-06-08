#include <stdio.h>
#include <stdlib.h>

int main()
{
    char str[10];
    int i;
    printf("\nDigite um nome: ");
    scanf("%s",str);
    if(str[0]=='a' || str[0]=='A')
        printf("\n%s",str);
    else
        printf("\nO nome n comeca com a letra 'a'!");
    return 0;
}

