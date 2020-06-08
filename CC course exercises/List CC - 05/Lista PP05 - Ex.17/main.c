#include <stdio.h>
#include <stdlib.h>

int main()
{
    char p[50],r[50];
    int i,c=0;
    printf("Digite uma string: ");
    gets(p);
    for(i=0;p[i]!='\0';i++){
        if(p[i]!=' '){
            r[c]=p[i];
            c++;
        }
    }
    r[c]='\0';
    printf("\n%s",r);
    return 0;
}
