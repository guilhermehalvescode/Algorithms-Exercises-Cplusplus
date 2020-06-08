#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
  int i,n,w,b;
  char **nomes,e,temp[30];
  do{
    printf("\nDigite quantos nomes a serem digitados: ");
    scanf("%d",&n);
  }while(n<1);
  nomes = (char**) malloc(n*sizeof(char*));
  for(i=0;i<n;i++)
    nomes[i] = (char*) malloc(30*sizeof(char));
  while(1){
    b=0;
    printf("(a) Gravar um nome em uma linha da matriz\n(b) Apagar o nome contido em uma linha da matriz\n(c) Informar um nome, procurar a linha onde ele se encontra e substituir por outro nome\n(d) Informar um nome, procurar a linha onde ele se encontra e apagar\n(e) Pedir para recuperar o nome contido em uma linha da matriz\n(s) Sair\n");
    setbuf(stdin,NULL);
    scanf("%c",&e);
    if(e=='s')
        break;
    switch (e){
        case 'a':
            do{
                printf("\nDigite a linha em que quer escrever um nome: ");
                scanf("%d",&i);
            }while(i<1 || i>n);
            printf("\nDigite o nome: ");
            setbuf(stdin,NULL);
            gets(nomes[i-1]);
            break;
        case 'b':
            do{
                printf("\nDigite a linha em que quer apagar um nome: ");
                scanf("%d",&i);
            }while(i<1 || i>n);
            for(w=0;w<30;w++)
                nomes[i-1][w]='\0';
            break;
        case 'c':
            printf("\nDigite um nome: ");
            setbuf(stdin,NULL);
            gets(temp);
            for(i=0;i<n;i++){
                if(strcmp(temp,nomes[i])==0){
                    printf("\nDigite o nome: ");
                    setbuf(stdin,NULL);
                    gets(temp);
                    strcpy(nomes[i],temp);
                    b=1;
                    break;
                }
            }
            if(b==0)
                printf("\nNão encontrado o nome!\n");
            break;
        case 'd':
            printf("\nDigite um nome: ");
            setbuf(stdin,NULL);
            gets(temp);
            for(i=0;i<n;i++){
                if(strcmp(temp,nomes[i])==0){
                    for(w=0;w<30;w++)
                        nomes[i][w]='\0';
                    b=1;
                    break;
                }
            }
            if(b==0)
                printf("\nNão encontrado o nome!\n");
            break;
        case 'e':
            do{
                printf("\nDigite a linha em que quer recuperar um nome: ");
                scanf("%d",&i);
            }while(i<1 || i>n);
            printf("\nO nome: %s\n",nomes[i-1]);
            break;
        default :
            printf("\nOpcao errada!\n");
            break;
    }
  }
  return 0;
}
