#include <stdio.h>
#include <stdlib.h>

int main()
{
    char p[100];
    int i;
    printf("\nDigite uma string: ");
    gets(p);
    for(i=0;p[i]!='\0';i++){
        if(p[i]>95 && p[i]<123)
            p[i]-=32;
        if(p[i]>64 && p[i]<88)
            p[i]+=3;
        if(p[i]>87 && p[i]<91)
            p[i]-=23;
    }
    printf("%s",p);
    return 0;
}
