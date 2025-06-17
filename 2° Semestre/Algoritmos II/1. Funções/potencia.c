/*Crie uma função que retorne a potencia de um numero passando base e expoente*/

#include <stdio.h>
int potencia(int base, int expoente)
{
  int resultado = 1;
  for (int i = 0; i < expoente; i++)
  {
    resultado *= base;
  }
  return resultado;
}
int main(void)
{
  int base, expoente;

  printf("Digite o número da base: ");
  scanf("%d", &base);
  printf("Digite o número que vai elevar a base: ");
  scanf("%d", &expoente);

  int resultado = potencia(base, expoente);

  printf("O resultado da potência é: %d", resultado);

  return 0;
}
