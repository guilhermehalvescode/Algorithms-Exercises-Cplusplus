#include <stdio.h>
#include <stdlib.h>

static void readWrite(FILE* in, FILE* out);

int main()
{
    FILE* input;
    FILE* output;

    input = fopen("arq1.txt","r");
    output = fopen("out.txt","w");
    
    if(input == NULL || output == NULL){
        printf("\nErro nas streams!");
        exit(1);
    }
    
    readWrite(input, output);

    fclose(input);
    
    input = fopen("arq2.txt","r");
    if(input == NULL){
        printf("\nErro nas streams!");
        exit(1);
    }
    
    readWrite(input, output);
    
    fclose(input);
    fclose(output);
    return 0;
}

static void readWrite(FILE* in, FILE* out){
    char c;
    while (1)
    {
        c = fgetc(in);
        if(feof(in))
            break;
        fputc(c, out);
    }
}