#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE* stream;

    stream = fopen("arq.txt","r");

    if(stream == NULL){
        printf("\nErro na stream.");
        exit(1);
    }

    int cont = 0;
    char c;

    while(1){
        c = fgetc(stream);
        if(feof(stream))
            break;
        if(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u')
            cont++;
    }

    printf("\nO arquivo tem %d vogais!\n",cont);
    fclose(stream);
    return 0;
}
