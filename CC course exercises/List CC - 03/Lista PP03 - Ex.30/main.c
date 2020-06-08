#include <stdio.h>
#include <stdlib.h>

int main()
{
    int N,seq_1=0,seq_2=0,seq_3=0,c=1;
    printf("Digite um valor N para realizar uma series de sequencias:\n");
    scanf("%i",&N);
    while(c<=N){
        seq_1+=c;
        c++;
    }
    c=1;
    while(c<=(2*N-1)){
        if(c%2==0){
            seq_2+=-c;
        }else{
            seq_2+=c;
            seq_3+=c;
        }
        c++;
    }
    printf("O valor da sequencia 1 e: %i\nO valor da sequencia 2 e: %i\nE o valor da 3 e: %i\n",seq_1,seq_2,seq_3);
    return 0;
}
