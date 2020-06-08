#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[2][2],b[2][2],r[2][2],i,j,l,c,ch,x;
    char e;
    for(i=0;i<2;i++){
        for(j=0;j<2;j++){
            printf("\nDigite o valor da matriz  a na linha %d e na coluna %d: ",i+1,j+1);
            scanf("%d",&a[i][j]);
        }
    printf("\n");
    }
    //-------------------------------------------------------
    for(i=0;i<2;i++){
        for(j=0;j<2;j++){
            printf("\nDigite o valor da matriz b na linha %d e na coluna %d: ",i+1,j+1);
            scanf("%d",&b[i][j]);
        }
    printf("\n");
    }
    //-------------------------------------------------------
    while(1){
        printf("\nEscolha um opcao:\n(a) somar as duas matrizes\n(b) subtrair a primeira matriz da segunda\n(c) adicionar uma constante as duas matrizes\n(d) imprimir as matrizes\n(s) sair do programa\n");
        setbuf(stdin,(NULL));
        scanf("%c",&e);
        if(e=='s')
            break;
        switch(e){
            case 'a': for(i=0;i<2;i++){
                        for(j=0;j<2;j++)
                            r[i][j]=a[i][j]+b[i][j];
                      }
                      ch=1;                      break;
            //-------------------------------------------------------
            case 'b': for(i=0;i<2;i++){
                        for(j=0;j<2;j++)
                            r[i][j]=a[i][j]-b[i][j];
                      }
                      ch=1;
                      break;
            //-------------------------------------------------------
            case 'c': printf("\nDigite a constante: ");
                      scanf("%d",&x);
                      printf("\nDigite a linha em qual deseja colocar a constante: ");
                      scanf("%d",&l);
                      printf("\nDigite a coluna em qual deseja colocar a constante: ");
                      scanf("%d",&c);
                      a[l-1][c-1]=x;
                      b[l-1][c-1]=x;
                      break;
            //-------------------------------------------------------
            case 'd': printf("\nA primeira matriz digitada e:\n");
                      for(i=0;i<2;i++){
                        for(j=0;j<2;j++)
                            printf("[%d] ",a[i][j]);
                        printf("\n");
                      }
                      printf("\nA segunda matriz digitada e:\n");
                      for(i=0;i<2;i++){
                        for(j=0;j<2;j++)
                            printf("[%d] ",b[i][j]);
                        printf("\n");
                      }
                      if(ch==1){
                        printf("\nA matriz resultante e:\n");
                        for(i=0;i<2;i++){
                            for(j=0;j<2;j++)
                                printf("[%d] ",r[i][j]);
                        printf("\n");
                        }
                      }
                      break;
        }
    }
    printf("\nVoce saiu do programa!!!!\n");
    system("pause");
    return 0;
}
