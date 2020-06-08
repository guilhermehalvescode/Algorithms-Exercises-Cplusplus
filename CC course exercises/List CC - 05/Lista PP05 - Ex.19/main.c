#include <stdio.h>
#include <stdlib.h>

struct pessoa{
    char nome[100];
    int idade;
};

int main()
{
    int posmaior,posmenor,i,aux,maior,menor,c;
    struct pessoa p[10];
    for(i=0;i<10;i++){
        printf("\nDigite o nome da pessoa %d:",i+1);
        setbuf(stdin,NULL);
        gets(p[i].nome);
        printf("\nDigite a idade da pessoa %d:",i+1);
        scanf("%d",&aux);
        if(aux<0)
            break;
        p[i].idade=aux;
        if(i==0){
            maior=p[i].idade;
            menor=p[i].idade;
            posmaior=i;
            posmenor=i;
        }
        if(p[i].idade>maior){
            maior=p[i].idade;
            posmaior=i;
        }
        if(p[i].idade<menor){
            menor=p[i].idade;
            posmenor=i;
        }
    }
    c=i;
    for(i=0;i<c;i++){
        if(p[i].idade==maior)
            printf("\n%s tem a maior idade: %d anos",p[i].nome,p[i].idade);
        if(p[i].idade==menor)
            printf("\n%s tem a menor idade: %d anos",p[i].nome,p[i].idade);
    }
    return 0;
}
