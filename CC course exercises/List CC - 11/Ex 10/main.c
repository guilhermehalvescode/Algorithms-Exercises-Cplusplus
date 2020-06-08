#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* getStr(FILE* in);
int lines(FILE* in);

int main()
{
    FILE* input;
    FILE* output;
    int i, j;

    char** str;
    str = (char**) malloc(2 * sizeof(char*));
    if(str == NULL){
        printf("\nErro ao alocar vetor!");
        exit(1);
    }

    for(i = 0; i < 2; i++){
        str[i] = (char*) malloc(20 * sizeof(char));
        if(str[i] == NULL){
            printf("\nErro na aloc!");
            exit(1);
        }
        for(j = 0; j < 20; j++)
            str[i][j] = '\0';
    }

    setbuf(stdin, NULL);
    scanf("%s[^\n]",str[0]);

    input = fopen(str[0], "r");

    setbuf(stdin, NULL);
    scanf("%s[^\n]",str[1]);

    output = fopen(str[1], "w");

    if(input == NULL || output == NULL){
        printf("\nErro nas streams!");
        exit(1);
    }

    int lin = lines(input), maior;

    str[0] = getStr(input);
    str[1] = getStr(input);
    maior = atoi(str[1]);
    
    for(i = 1; i < lin; i++){
        int comp;
        char* temp;
        temp = (char*) malloc(20 * sizeof(char));
        for(j = 0; j < 20; j++)
            temp[j] = '\0';
        if(str == NULL){
            printf("\nErro ao alocar vetor!");
            exit(1);
        }

        temp = getStr(input);
        str[1] = getStr(input);
        comp = atoi(str[1]);
        if(maior < comp){
            strcpy(str[0], temp);
            maior = comp;
        }
        free(temp);
    }

    fprintf(output, "%s: %d", str[0], maior);
    for(i = 0; i < 2; i++)
        free(str[i]);
    free(str);

    fclose(input);
    fclose(output);
    return 0;
}

char* getStr(FILE* in){
    char* string, c;
    string = (char*) malloc(40 * sizeof(char));
    if(string == NULL)
        exit(1);
    int i;
    for(i = 0; i < 40 ; i++)
        string[i] = '\0';
    i = 0;
    while (1)
    {
        c = fgetc(in);
        if(feof(in) || c == ' ' || c == '\n')
            break;
        string[i] = c;
        i++;
    }
    return string;
}

int lines(FILE* in){
    char c;
    int i = 0;
    while (1)
    {
        c = fgetc(in);
        if(feof(in))
            break;
        if(c == '\n')
            i++;
    }
    rewind(in);
    return i;
}
