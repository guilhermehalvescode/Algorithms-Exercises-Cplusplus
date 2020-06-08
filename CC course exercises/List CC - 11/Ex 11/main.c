#include <stdio.h>
#include <stdlib.h>
#include <string.h>

static void getStr(FILE* input, char* str);

int main(){

    char arqName[20] = {'\0'}, str[20] = {'\0'};
    FILE* input;
    int cont = 0;

    printf("\nDigite o nome do arquivo: ");
    setbuf(stdin, NULL);
    scanf("%s[^\n]", arqName);

    input = fopen(arqName, "r");
    if(input == NULL)
    {
        printf("\nerro na stream!");
        exit(1);
    }

    printf("\nDigite a palavra: ");
    setbuf(stdin, NULL);
    scanf("%s[^\n]", str);

    printf("\narq: %s", arqName);
    printf("\npalavra: %s", str);


    while(1){
        char temp[30] = {'\0'}, ret[30] = {'\0'};
        getStr(input, temp);

        if(feof(input))
            break;

        strcpy(ret, temp);
        
        if(!strcmp(ret, str))
            cont++;
    }

    printf("\n%s se repete %d vezes!", str, cont);
    fclose(input);
    return 0;
}


static void getStr(FILE* input, char* str){
    char c;
    int i = 0;
    while (1)
    {
        c = fgetc(input);
        if(feof(input) || c == ' ' || c == '\n')
            break;
        str[i] = c;
        i++;
    }
}

