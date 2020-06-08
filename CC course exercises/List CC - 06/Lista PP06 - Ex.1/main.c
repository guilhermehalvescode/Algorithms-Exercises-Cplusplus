#include <stdio.h>
#include <stdlib.h>

struct horario{
    int hora,minuto,segundos;
};
struct data{
    int dia,mes,ano;
};
struct comp{
    struct horario ho;
    struct data da;
    char str[1000];
};

int main()
{
    struct comp cmp;
    printf("\nDigite o dia, mes e ano: ");
    setbuf(stdin,NULL);
    scanf("%d",&cmp.da.dia);
    setbuf(stdin,NULL);
    scanf("%d",&cmp.da.mes);
    setbuf(stdin,NULL);
    scanf("%d",&cmp.da.ano);
    printf("\nDigite a hora, minutos e segundos: ");
    setbuf(stdin,NULL);
    scanf("%d",&cmp.ho.hora);
    setbuf(stdin,NULL);
    scanf("%d",&cmp.ho.minuto);
    setbuf(stdin,NULL);
    scanf("%d",&cmp.ho.segundos);
    printf("\nDigite o recado: ");
    setbuf(stdin,NULL);
    fgets(cmp.str,999,stdin);


    printf("\nA data digitada e\nDia: %d\nMes: %d\nAno: %d",cmp.da.dia,cmp.da.mes,cmp.da.ano);
    printf("\nO horario digitado e: %d :%d :%d",cmp.ho.hora,cmp.ho.minuto,cmp.ho.segundos);
    printf("\ndoO recado digitado e: %s",&cmp.str);



    return 0;
}
