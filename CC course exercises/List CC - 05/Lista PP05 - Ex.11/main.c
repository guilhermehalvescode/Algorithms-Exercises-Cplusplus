#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    char str[10];
    int i;
    printf("\nDigite uma string: ");
    setbuf(stdin,(NULL));
    scanf("%s",str);
    for(i=0;i<strlen(str);i++){
        if((str[i]!='a' && str[i]!='A') && (str[i]!='e' && str[i]!='E') && (str[i]!='i' && str[i]!='I') && (str[i]!='o' && str[i]!='O') && (str[i]!='u' && str[i]!='U')){
            printf("%c",str[i]);
        }
    }
    return 0;
}
