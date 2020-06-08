#include <stdio.h>
#include <stdlib.h>

int main()
{
   int input, contador = 0, valor1, valor2;

				printf("Insira respectivamente 3 numeros inteiros positivos diferente de 0: ");
				scanf("%d %d %d", &input, &valor1, &valor2);

				for (int i = 0; contador < input; i++) {
					if(i % valor1 == 0 || i % valor2 == 0) {
						printf("O numero %d e multiplo de %d e/ou %d!\n", i, valor1, valor2);
						contador++;
					}
				}
    return 0;
}
