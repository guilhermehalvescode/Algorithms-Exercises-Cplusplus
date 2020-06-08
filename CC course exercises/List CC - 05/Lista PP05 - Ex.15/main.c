#include <stdio.h>
#include <stdlib.h>

int main()
{
    char p[50];
    int i;
    printf("\nDigite uma string: ");
    gets(p);
    for(i=0;p[i]!='\0';i++){
        if(p[i]>=65 && p[i]<=90)
            p[i]+=32;
    }
    printf("%s",p);
    return 0;
}
