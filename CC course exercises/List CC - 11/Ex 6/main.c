#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>

int main(void)
{
    FILE* stream;
    stream = fopen("arq.txt","r");

    if(stream == NULL){
        printf("\nErro na stream.");
        exit(1);
    }
    
    int quant[26] = {0};
    char c;

    while(1){
        c = fgetc(stream);
        if(feof(stream))
            break;
        c = toupper(c);
        if(c > 64 && c < 91){
            quant[c - 65]++;            
        }
    }
    int i;
    for(i = 0; i < 26; i++){
        printf("letra %c: %d\n", i+97, quant[i]);
    }
    free(quant);
    fclose(stream);
    return 0;
}

