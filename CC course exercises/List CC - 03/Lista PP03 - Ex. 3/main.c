#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int main()
{
    int contador=10;
    while (contador>=0){
        printf("%i\n",contador);
        contador--;
        Sleep(500);
        }
    printf("FIM!!");
    return 0;
}
