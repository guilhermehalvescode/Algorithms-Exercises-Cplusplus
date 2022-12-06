#include <stdio.h>
#include <math.h>

#define PI 3.141592654

int main() {
  double a, b, c;
  while(scanf("%lf %lf %lf", &a, &b, &c) != EOF) 
    printf("%.2lf\n", 5 * (c + (tan((a * PI) / 180.0) * b)));

  return 0;
}