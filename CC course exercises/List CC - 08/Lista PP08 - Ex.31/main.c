#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* fiboword(int n, char *word){
    if(n==0)
        return "b";
    if(n==1)
        return "a";
    if(n>1){
        strcat(fiboword(n-1,word),fiboword(n-2,word));
        return word;
    }
}

int main()
{
    char str[1000];
    int n,i;
    for(i=0;i<1000;i++)
        str[i]='\0';
    printf("\nDigite n: ");
    scanf("%d",&n);
    printf("\nFiboword: %s",fiboword(n,&str));
    return 0;
}
