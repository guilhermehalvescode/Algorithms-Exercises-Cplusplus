#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    char str[10];
    int i;
    printf("\nDigite uma string: ");
    scanf("%s",str);
    for(i=0;i<strlen(str);i++){
        if(str[i]=='0')
            str[i]='1';
    }
    printf("%s",str);
    return 0;
}

