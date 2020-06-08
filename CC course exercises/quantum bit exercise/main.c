#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

struct point
{
  int x,y;
};

struct quantum
{
  int Xin,Yin;
  int Xout,Yout;
};

typedef struct point Dot;
typedef struct quantum Hole;

int getNum(FILE* t);
int mod(int num);
int checkH(Hole* h ,int i);
int distance(Hole* p, Dot* bit, int n);

int main() {
  FILE* Stream;
  FILE* Output;

  Output = fopen("output_data.txt","w+");
  Stream = fopen("input_data.txt","r");

  if(Stream == NULL || Output == NULL){
    printf("\nErro na Stream");
    exit(1);
  }

  int T,N,i,l; Dot grid,qubit;

  T = getNum(Stream);
  /* printf("#%d casos de teste#\n",T); */
  for(i = 0;i < T; i++){
    grid.x = getNum(Stream);
    grid.y = getNum(Stream);
    /* printf("          -----------Grid[%d][%d]\n",grid.x,grid.y); */

    qubit.x = getNum(Stream);
    qubit.y = getNum(Stream);
   /*  printf("          -----------Qubit[%d][%d]\n",qubit.x,qubit.y); */

    N = getNum(Stream);
   /*  printf("          -----------NumOfPortals[%d]\n",N); */

    Hole* portal;

    portal = (Hole*) malloc(N * sizeof(Hole));
    if(portal == NULL){
      printf("\nErro na alocação!\n");
      exit(1);
    }
    /* printf("          -----------Alocado[%d]portais\n",N); */

    for(l = 0; l < N ; l++){
      portal[l].Xin = getNum(Stream);
      portal[l].Yin = getNum(Stream);
      portal[l].Xout = getNum(Stream);
      portal[l].Yout = getNum (Stream);
     /*  printf("          -----------Portal[%d]: [%d][%d]in [%d][%d]out\n", l, portal[l].Xin, portal[l].Yin, portal[l].Xout, portal[l].Yout);
 */    }

    fprintf(Output,"case #%d: %d\n",i+1,distance(portal, &qubit, N));
    free(portal);
  }
  fclose(Stream);
  fclose(Output);

  return 0;

}

int getNum(FILE* t){
  char temp[10] = {'\0'},c; int i = 0;
  while (1)
  {
    c = fgetc(t);
    if(feof(t) || c == '\n' || c == ' ')
      break;
    temp[i] = c;
    i++;
  }
  return atoi(temp);
}

int distance(Hole* p, Dot* bit, int n){
  int i,l,total = 0, ind, var, qtdaP = n;
  int menor,res;
  int achar_menor = 0;
  do{
    var = 0;
    achar_menor = 0;
    for(i = 0; i < n; i++){
      if(!checkH(p,i))
        continue;
      
      res = mod(bit->x - p[i].Xin) + mod(bit->y - p[i].Yin);
      /* if(i == 0){
        menor = res;
        ind = i;
        var = 1;
      } */
      
      if(achar_menor == 0){
        for(l = 0; l < n; l++){
          if(checkH(p,l)){
            menor = res;
            ind = l;
            var = 1;
            achar_menor = 1;
            break;
          } 
        }
      }
      
      if(menor > res){
        menor = res;
        ind = i;
        var = 1;
      }
      if(menor == res){
        if(p[ind].Xin > p[i].Xin){
          menor = res;
          ind = i;
          var = 1;
        }
        if(p[ind].Xin == p[i].Xin){
          if(p[ind].Yin > p[i].Yin){
            menor = res;
            ind = i;
            var = 1;
          }
        }
      }
    }
   /*  printf("          -----------PortalMenor[%d]: [%d][%d]in [%d][%d]out\n", ind, p[ind].Xin, p[ind].Yin, p[ind].Xout, p[ind].Yout);
    printf("          -----------PosAtualQubit[%d][%d]\n", bit->x, bit->y);
    printf("          -----------QtdadeP[%d]\n",qtdaP);
    printf("          -----------Totalantes[%d] ",total);
     */
    if(qtdaP != 0)
      total += menor;
    
    /* printf("-----------Totaldepois[%d]\n",total); */
    bit->x = p[ind].Xout;
    bit->y = p[ind].Yout;
    p[ind].Xin = -1;
    p[ind].Yin = -1;
    p[ind].Xout = -1;
    p[ind].Yout = -1;
    qtdaP--;

  }while (var == 1);
 /*  printf("\n-------------PORTAIS----------\n");
  for(i = 0; i < n; i++)
    printf("Portal[%d]: [%d][%d]in [%d][%d]out\n", i, p[i].Xin, p[i].Yin, p[i].Xout, p[i].Yout); */
  
  return (int) total % 100003;
}

int mod(int num){
  if(num < 0)
    return num * -1;
  return num;
}

int checkH(Hole* h,int i){
  if(h[i].Xin < 0 || h[i].Yin < 0 || h[i].Xout < 0 || h[i].Yout < 0 )
    return 0;
  return 1;
}
