#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char str[10];
    int i,qtd=0;
    strcpy(str,"helicopter");
    for(i=0;i<10;i++){
        if(str[i]=='\0')
            break;
        if(str[i]!=' ')
            qtd++;
    }
    printf("O tamanho e: %d\n",qtd);
    return 0;
}
