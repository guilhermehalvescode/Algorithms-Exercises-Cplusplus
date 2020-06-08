#include <stdio.h>
#include <stdlib.h>

int main()
{
    float trab_lab,aval_semes,exame_f,media;
    printf("Digite as notas de um aluno para ver se esse foi aprovado ou nao!\n\nDigite nota tirada pelo aluno no trabalho de laboratorio:\n");
    scanf("%f",&trab_lab);
    printf("Digite a nota tirada pelo aluno na avaliacao semestral:\n");
    scanf("%f",&aval_semes);
    printf("Digite a nota tirada pelo aluno no exame final:\n");
    scanf("%f",&exame_f);
    if (trab_lab>=0 && trab_lab<=10 && aval_semes>=0 && aval_semes<=10 && exame_f>=0 && exame_f<=10){// para notas validas
        media=((trab_lab*2)+(aval_semes*3)+(exame_f*5))/10;
        if (media>=0 && media<3){//nota de reprovado
            printf("Voce foi reprovado com nota de %.2f e nao tem direito de fazer recuperacao!",media);
        }else{//notas q nao entao no intervalo [0,2.9]
                    if (media>=3 && media<5){
                        printf("Voce foi reprovado com nota de %.2f e tem direito a fazer a recuperacao!",media);
                    }else{
                        printf("Voce foi aprovado com nota de %.2f!",media);
                    }
            }
    }else{//resposta para notas invalidas
        printf("Os valores digitados das notas sao invalidos!\n");
    }
    return 0;
}
