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

    int cont1 = 0;
    char c, digit;
    printf("\nDigite o caractere: ");
    setbuf(stdin, NULL);
    scanf("%c", &digit);

    while(1){
        c = fgetc(stream);
        if(feof(stream))
            break;
        if(c == digit)
            cont1++;
    }

    printf("\nO arquivo tem %d cacteres %c!\n", cont1, digit);
    fclose(stream);
    return 0;
}
