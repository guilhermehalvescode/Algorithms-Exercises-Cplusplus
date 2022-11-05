#include <bits/stdc++.h>

using namespace std;

typedef long double ld;

#define GRAVIDADE 9.80665
#define PI 3.14159
// S = S0 + VT -GT²/2
// 0 = c + bt -gt²/2
ld calculaTempo(ld vy, ld posicaoInicial)
{
  ld a = -GRAVIDADE / 2, b = vy, c = posicaoInicial;

  ld delta = b * b - 4 * a * c;

  ld t1 = (-b + sqrt(delta)) / (2 * a);
  ld t2 = (-b - sqrt(delta)) / (2 * a);

  return (t1 > 0 ? t1 : t2);
}

// X = X0 + VT
ld calculaAlcance(ld vx, ld tempo)
{
  return vx * tempo;
}

int main()
{
  ld altura;

  while (cin >> altura)
  {
    int p1, p2;

    cin >> p1 >> p2;

    int tentativas;

    cin >> tentativas;

    while (tentativas--)
    {
      ld angulo, velocidadeInicial;

      cin >> angulo >> velocidadeInicial;

      angulo *= PI / 180;

      ld vy = velocidadeInicial * sin(angulo);
      ld vx = velocidadeInicial * cos(angulo);

      ld tempo = calculaTempo(vy, altura);

      ld alcance = calculaAlcance(vx, tempo);

      printf("%.5Lf -> ", alcance);

      if (alcance >= p1 && alcance <= p2)
      {
        printf("D");
      }
      else
      {
        printf("N");
      }

      printf("UCK\n");
    }
  }

  return 0;
}