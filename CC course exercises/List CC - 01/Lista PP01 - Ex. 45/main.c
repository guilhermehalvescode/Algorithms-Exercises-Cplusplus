#include <stdio.h>
#include <stdlib.h>

int main()
{

    char c;

    printf("Digite uma letra maiscula:");
    c=getchar ();
    printf("Voce digitou: %c\n",c);
    c=c+32;
    printf("A sua forma minuscula e: %c",c);

    return 0;
}
