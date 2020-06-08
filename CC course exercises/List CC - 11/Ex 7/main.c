#include <stdlib.h>
#include <stdio.h>


int main(void)
{
    FILE* input;
    FILE* output;

    input = fopen("arq.txt","r");
    output = fopen("output.txt","w");

    if(input == NULL || output == NULL){
        printf("\nErro na stream.");
        exit(1);
    }

    char c;
    
    while(1){
        c = fgetc(input);
        if(feof(input))
            break;
        if(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' || c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U')
            fputc('*',output);
        else
            fputc(c,output);
    }
    fclose(input);
    fclose(output);
    return 0;
}
