#include <stdio.h>
#include <stdlib.h>

int** matalloc(int l,int c){
    int i,j;
    int **m;
    m = (int**) malloc(l*sizeof(int*));
    for(i=0;i<l;i++)
        m[i]=(int*) malloc(c*sizeof(int));
    printf("\n");
    for(i=0;i<l;i++){
        for(j=0;j<c;j++){
            printf("\nDigite mat[%d][%d]: ",i+1,j+1);
            scanf("%d",&m[i][j]);
        }
    }
    return m;
}

int** produto(int **m1,int **m2,int l1,int b,int c2){
    int i,j,k,**r;
    r = (int **) malloc(l1*sizeof(int*));
    for(i=0;i<l1;i++)
            r[i]= (int*) malloc(c2*sizeof(int));
    for(i=0;i<l1;i++){
        for(j=0;j<c2;j++){
            r[i][j]=0;
            for(k=0;k<b;k++){
                r[i][j]+=m1[i][k]*m2[k][j];
            }
        }
    }
    return r;
}

void imprime(int **m,int l,int c){
    int i,j;
    for(i=0;i<l;i++){
        for(j=0;j<c;j++)
            printf("[%d] ",m[i][j]);
        printf("\n");
    }
}

int main()
{
    int a,b,c,d,**mat1,**mat2,**prod;
    printf("\nDigite a: ");
    scanf("%d",&a);
    printf("\nDigite b: ");
    scanf("%d",&b);
    printf("\nDigite c: ");
    scanf("%d",&c);
    printf("\nDigite d: ");
    scanf("%d",&d);
    mat1 = matalloc(a,b);
    mat2 = matalloc(c,d);
    printf("\nMat1:\n");
    imprime(mat1,a,b);
    printf("\nMat2:\n");
    imprime(mat2,c,d);
    if(b==c){
        prod=produto(mat1,mat2,a,b,d);
        printf("\nProd:\n");
        imprime(prod,a,d);
    }
    free(prod);
    free(mat1);
    free(mat2);

    return 0;
}
