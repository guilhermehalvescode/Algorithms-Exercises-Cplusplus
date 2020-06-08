#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    float altura_e,altura_d,R;
    printf("Digite a altura dos degraus de uma escada:\n");
    scanf("%f",&altura_e);
    printf("Agora coloque a altura que deseja chegar:\n");
    scanf("%f",&altura_d);
    R=ceil(altura_d/altura_e);
    printf("Voce deve subir %.0f degrau/degraus!",R);
    return 0;
}
