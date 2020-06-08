#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    char str[10];
    int i,ch;
    do{
        printf("\nDigite uma string de numeros binarios: ");
        setbuf(stdin,NULL);
        gets(str);
        ch=0;
        for(i=0;i<strlen(str);i++){
            if(str[i]!='1' && str[i]!='0')
                ch=1;
            }
    }while(ch==1);
    ch=0;
    for(i=0;i<strlen(str);i++){
        if(str[i]=='1')
            ch++;
    }
    printf("\nExistem %d numeros '1'!",ch);
    return 0;
}
