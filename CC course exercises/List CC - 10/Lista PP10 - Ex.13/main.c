#include <stdio.h>
#include <stdlib.h>

void leia(int **m,int a, int b){
    int i,j;
    for(i=0;i<a;i++){
      for(j=0;j<b;j++){
        printf("\nDigite mat[%d][%d]: ",i+1,j+1);
        scanf("%d",&m[i][j]);
      }
      printf("\n");
    }
}

int check(int **m,int a, int b){
  int v,i,j;
  printf("\nDigite um valor: ");
  scanf("%d",&v);
  for(i=0;i<a;i++){
      for(j=0;j<b;j++){
        if(m[i][j]==v)
          return 1;
      }
  }
  return 0;
}

int main(void) {
  int **mat,l,c,i;
  do{
    printf("\nDigite as linhas da matriz: ");
    scanf("%d",&l);
  }while(l<1);
  mat = (int**) malloc(l*sizeof(int*));
  do{
    printf("\nDigite as colunas da matriz: ");
    scanf("%d",&c);
  }while(c<1);
  for(i=0;i<l;i++)
    mat[i] = (int*) malloc(c*sizeof(int));
  leia(mat,l,c);
  if(check(mat,l,c))
    printf("\nValor se encontra na matriz!");
  else
    printf("\nNao se encotra na matriz!");
  return 0;
}
