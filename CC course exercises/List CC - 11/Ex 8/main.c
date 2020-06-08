#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>


int main(void)
{
    FILE* input;
    FILE* output;
    char str[20] = {'\0'};
    
    printf("\nDigite o arquivo de entrada: ");
    setbuf(stdin, NULL);
    scanf("%s[^\n]",str);
    input = fopen(str,"r");
    if(input == NULL){
        printf("\nErro no input.");
        exit(1);
    }
    
    printf("\nDigite o arquivo de saida: ");
    setbuf(stdin, NULL);
    scanf("%s[^\n]",str);
    output = fopen(str,"w");
    if(output == NULL){
        printf("\nErro na output.");
        exit(1);
    }

    char c;

    while(1){
        c = fgetc(input); 
        printf("%c",str);
        if(feof(input))
            break;
        fputc(toupper(c),output);
    }

    fclose(input);
    fclose(output);
    return 0;
}
