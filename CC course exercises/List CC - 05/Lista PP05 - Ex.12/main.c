#include <stdio.h>
#include <stdlib.h>

int main()
{
    char p[100],c;
    int v=0,i;
    printf("\nDigite a palavra: ");
    gets(p);
    printf("\nDigite uma consoante: ");
    c=getc(stdin);
    for(i=0;p[i]!='\0';i++){
        if(p[i]=='a' || p[i]=='A' || p[i]=='e' || p[i]=='E' || p[i]=='i' || p[i]=='I' || p[i]=='o' || p[i]=='O' || p[i]=='u' || p[i]=='U'){
            v++;
            p[i]=c;
        }
    }
    printf("\nVogais: %d\nPalavra: %s",v,p);
    return 0;
}
