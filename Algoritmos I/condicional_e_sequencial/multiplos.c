// Leia 2 valores inteiros (A e B). Após, o programa deve mostrar uma mensagem "Sao Multiplos" ou "Nao sao Multiplos", indicando se os valores lidos são múltiplos entre si.

#include <stdio.h>
int main(void)
{
  int A, B;

  scanf("%d", &A);
  scanf("%d", &B);

  if (B % A == 0 || A % B == 0)
  {
    printf("Sao Multiplos\n");
  }
  else
  {
    printf("Nao sao Multiplos\n");
  }
  return 0;
}