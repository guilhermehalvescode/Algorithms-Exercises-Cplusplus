#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char p[100],w[100];
    int i;
    printf("\nDigite a string p: ");
    gets(p);
    printf("\nDigite a string w: ");
    setbuf(stdin,NULL);
    gets(w);
    for(i=strlen(p)-1;i>=0;i--){
        if(p[i]=='A' || p[i]=='a')
            p[i]='*';
        printf("%c",p[i]);
    }printf("\n");
    for(i=strlen(w)-1;i>=0;i--){
        if(w[i]=='A' || w[i]=='a')
            w[i]='*';
        printf("%c",w[i]);
    }
    return 0;
}
