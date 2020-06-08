#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main(void)
{
    FILE* stream = fopen("input.txt","r");
    char c, str[50] = {'\0'};
    int carac = 0, linhas = 0, word = 0, i = 0, letras[26] = {0};
    while(1){
        c = fgetc(stream);
        if(c == EOF || c == '\n')
            linhas++;
        if(str[0] != '\0' && (c == ' ' || c == EOF)){
            word++;
            i = 0;
        }
        if(feof(stream))
            break;
        if(c != '\n' && c != ' '){
            str[i] = c;
            i++;
        }
        str[i] = '\0';
        if(c != '\n' && c != ' ')
            carac++;
        c = tolower(c);
        if(c > 96 && c < 123)
            letras[c - 97]++;            
        
    }
    printf("\nlinhas: %d\npalavra: %d\ncaracteres: %d\nLETRAS: \n", linhas, word, carac);
    for(i = 0; i < 26; i++)
        printf("letra %c: %d\n", i+97, letras[i]);

    return 0;
}
