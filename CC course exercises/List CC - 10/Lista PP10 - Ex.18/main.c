#include <stdio.h>
#include <stdlib.h>

struct resgistro{
  char nome[30];
  int codigo;
  float preco;
};

int main(void) {
  int i,*v,**mat;
  struct resgistro *registros;
  char **texto;

  v = (int*) malloc(1024);
  mat = (int**) malloc(10*sizeof(int*));
  for(i=0;i<10;i++)
    mat[i] = (int*) malloc(10*sizeof(int));
  registros = (struct resgistro*) malloc(50*sizeof(struct resgistro));

  texto = (char**) malloc(100*sizeof(char*));
  for(i=0;i<100;i++){
    texto[i]= (char*) malloc(80*sizeof(char));
  }
  return 0;
}
