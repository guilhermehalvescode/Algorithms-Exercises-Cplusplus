#include <stdio.h>
#include <stdlib.h>

int main()
{
    char str[50];
    int i;
    printf("\nDigite uma string: ");
    scanf("%s",str);
    for(i=0;str[i]!='\0';i++){
        if(str[i]>96 && str[i]<123)
            str[i]-=32;
    }
    printf("%s",str);
    return 0;
}
