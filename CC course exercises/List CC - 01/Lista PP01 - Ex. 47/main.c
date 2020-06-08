#include <stdio.h>
#include <stdlib.h>

int main()
{
    float nro;
    int P_nro,S_nro,T_nro,Q_nro,arredonda_S,arredonda_T;
    printf("Insira um numero de quatro digitos:\n");
    scanf("%f",&nro);
    P_nro=(int)nro/1000;
    arredonda_S=nro/100;
    S_nro=arredonda_S%10;
    arredonda_T=nro/10;
    T_nro=arredonda_T%10;
    Q_nro=(int)nro%10;

    printf("%i\n%i\n%i\n%i",P_nro,S_nro,T_nro,Q_nro);
    return 0;
}
