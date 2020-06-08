#include <stdio.h>
#include <stdlib.h>

int main()
{
    int contadorfor,contadorwhile=0,contador_do_while=0;
    for(contadorfor=1;contadorfor<=100;contadorfor++){
        printf("%i\n",contadorfor);
    }
    while (contadorwhile<100){
        contadorwhile++;
        printf("%i\n",contadorwhile);
    }
    do{
        contador_do_while++;
        printf("%i\n",contador_do_while);
    }while (contador_do_while<100);
    return 0;
}
