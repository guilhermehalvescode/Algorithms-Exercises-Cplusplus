#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    char str[10];
    int i;
    printf("\nDigite uma palavra: ");
    setbuf(stdin,NULL);
    gets(str);
    for(i=strlen(str)-1;i>=0;i--)
        printf("%c",str[i]);

    return 0;
}
