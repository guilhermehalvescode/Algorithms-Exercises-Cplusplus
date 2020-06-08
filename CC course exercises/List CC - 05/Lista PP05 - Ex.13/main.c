#include <stdio.h>
#include <stdlib.h>

int main()
{
    char p[100];
    int i,esp=0;
    printf("\nDigite uma string: ");
    setbuf(stdin,NULL);
    gets(p);
    for(i=0;p[i]!='\0';i++){
        if(p[i]==' ')
            esp++;
    }
    printf("\nA palavra tem %d espacos!",esp);
    return 0;
}
