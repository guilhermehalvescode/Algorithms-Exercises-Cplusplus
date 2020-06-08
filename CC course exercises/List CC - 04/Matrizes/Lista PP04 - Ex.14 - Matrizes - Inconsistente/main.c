#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int car[5][5],i,j,check,l,c;
    srand(time(NULL));
    for(i=0;i<5;i++){
        for(j=0;j<5;j++){
            do{
                car[i][j]=rand()%100;
                check=0;
                    for(l=0;l<i;l++){
                        for(c=0;c<j;c++){
                            if(car[l][c]==car[i][j]){
                                check=1;
                                break;
                            }
                        if(check==1)
                            break;
                        }
                    }
            }while(check==1);
        }
    }
    printf("\n");
    for(i=0;i<5;i++){
        for(j=0;j<5;j++)
            printf("[%d] ",car[i][j]);
    printf("\n");
    }
    return 0;
}
