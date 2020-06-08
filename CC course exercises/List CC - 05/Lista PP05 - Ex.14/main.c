#include <stdio.h>
#include <stdlib.h>

int main()
{
    char p[50];
    int i;
    printf("\nDigite a string: ");
    setbuf(stdin,NULL);
    gets(p);
    fputs(p,stdout);
    printf("\n");
    for(i=0;p[i]!='\0';i++)
        p[i]+=1;
    fputs(p,stdout);
    return 0;
}
