#include <stdio.h>
#include <stdlib.h>

int main()
{
    float nro;
    int P_nro,S_nro,T_nro,Q_nro,arredonda_S,arredonda_T;
    printf("Insira um numero positivo de 3 digitos:\n");
    scanf("%f",&nro);
    P_nro=(int)nro/100;
    S_nro=(int)(nro/10)%10;
    T_nro=(int)nro%10;
    printf("%i%i%i",T_nro,S_nro,P_nro);
    return 0;
}
