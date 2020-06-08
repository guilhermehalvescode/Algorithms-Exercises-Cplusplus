#include <stdio.h>
#include <stdlib.h>

int repete(char *n,int k,int *i){
    if(n[*i]=='\0')
        return 0;
    if(n[*i]!=k){
        *i=*i+1;
        return repete(n,k,i);
    }
    if(n[*i]==k){
        *i=*i+1;
        return 1+repete(n,k,i);
    }
}


int main()
{
    char N[50],K;
    int i=0;
    setbuf(stdin,NULL);
    gets(N);
    setbuf(stdin,NULL);
    scanf("%c",&K);
    printf("\n%d\n",repete(N,K,&i));
    return 0;
}
