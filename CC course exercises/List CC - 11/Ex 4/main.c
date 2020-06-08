#include <stdlib.h>
#include <stdio.h>

int main(void)
{
    FILE* stream;

    stream = fopen("arq.txt","r");

    if(stream == NULL){
        printf("\nErro na stream.");
        exit(1);
    }

    int cont1 = 0, cont2 = 0;
    char c;

    while(1){
        c = fgetc(stream);
        if(feof(stream))
            break;
        if(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u')
            cont1++;
        else
            cont2++;
        
    }

    printf("\nO arquivo tem %d vogais e %d consoantes!\n", cont1, cont2);
    fclose(stream);
    return 0;
}
