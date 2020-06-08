#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    int c=1000,o_h,o_l;
    double r;
    while(c<=9999){
        o_h=c/100;
        o_l=c%100;
        r=o_h+o_l;
        r=pow(r,2);
        if(r==c){
          printf("\n %i \n",c);
        }
        c++;
    }
    return 0;
}
