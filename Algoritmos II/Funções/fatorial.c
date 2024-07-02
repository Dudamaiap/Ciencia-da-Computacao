/* Crie uma função que dê o fatorial de número;*/

#include <stdio.h>

int fatorial(int num) {
  int fat = 1;
  for (int i = 1; i <= num; i++) {
    fat *= i;
  }
  return fat;
}
int main(void) {
  int numero;

  printf("Insira um número para o fatorial: ");
  scanf("%d", &numero);

  int resultado = fatorial(numero);

  printf("O resultado do fatorial é: %d", resultado);

  return 0;
}

