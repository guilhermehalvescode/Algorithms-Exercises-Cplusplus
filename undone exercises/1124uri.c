#include <stdio.h>
#include <math.h>

double tam(int r){
    double res = (r * sqrt(2)) + r; 
    return res;
}

int main(void){
    while(1){
        int l, c, r1, r2;
        scanf("%d %d %d %d", &l, &c, &r1, &r2);
        if(l == 0 && c == 0 && r1 == 0 && r2 == 0)
            break;
        double d = sqrt(pow(l,2) + pow(c,2));
        if(tam(r1) + tam(r2) <= d)
            printf("S\n");
        else
            printf("N\n"); 
    }
    return 0;
}
