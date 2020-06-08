#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    FILE *arq; char c; int i;
    arq = fopen("arq.txt","w");
    if(arq==NULL){
        printf("\nErro no carregamento!!");
        system("pause");
        exit(1);
    }
    printf("\nEnquanto digita, pressione 0 para parar: ");
    while(1){
        setbuf(stdin,NULL);
        scanf("%c[^\n]",&c);
        if(c=='0')
            break;
        fputc(c,arq);
    }
    fclose(arq);
    arq = fopen("arq.txt","r");
    if(arq==NULL){
        printf("\nErro no carregamento!!");
        system("pause");
        exit(1);
    }
    while(1){
        c = fgetc(arq);
        if(feof(arq)){
            printf("\nFim do arquivo!\n");
            break;
        }
        printf("%c",c);
    }
    fclose(arq);
    system("pause");
    return 0;
}
