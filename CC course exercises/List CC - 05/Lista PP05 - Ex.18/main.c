#include <stdio.h>
#include <stdlib.h>

int main()
{
    char p[50],l1,l2;
    int i;
    printf("Digite a string: ");
    gets(p);
    printf("\nDigite l1: ");
    setbuf(stdin,NULL);
    scanf("%c",&l1);
    printf("\nDigite l2: ");
    setbuf(stdin,NULL);
    scanf("%c",&l2);
    for(i=0;p[i]!='\0';i++){
        if(p[i]==l1)
            p[i]=l2;
    }
    printf("\n%s",p);
    return 0;
}
