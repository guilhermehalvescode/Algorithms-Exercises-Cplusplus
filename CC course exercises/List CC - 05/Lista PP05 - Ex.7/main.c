#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char str1[10],str2[10];
    int i,ch=1;
    printf("\nDigite string1: ");
    setbuf(stdin,(NULL));
    fgets(str1,10,stdin);
    printf("\nDigite string2: ");
    setbuf(stdin,(NULL));
    fgets(str2,10,stdin);
    if(strlen(str1)==strlen(str2)){
        for(i=0;i<strlen(str1);i++){
            if(str1[i]!=str2[i])
                ch=0;
        }
    if(ch==1)
        printf("\nAs palavras sao iguais!");
    else
        printf("\nAs strings sao de mesmo tamanho, porem diferentes!");
    }else
        printf("\nAs strings nao sao de mesmo tamanho!");
    return 0;
}
