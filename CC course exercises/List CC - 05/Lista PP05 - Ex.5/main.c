#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char str[10];
    int i,qtd=0;
    setbuf(stdin,(NULL));
    fgets(str,10,stdin);
    for(i=0;i<10;i++){
        if(str[i]=='\n' || str[i]==' ')
            qtd++;
    }
    printf("\nTem %d letras!",strlen(str)-qtd);
    return 0;
}

