// Faça um programa que leia 6 valores. Estes valores serão somente negativos ou positivos (desconsidere os valores nulos). A seguir, mostre a quantidade de valores positivos digitados.

#include <stdio.h>
int main(void)
{

  float X;
  int positivo = 0, i;

  for (i = 1; i <= 6; i++)
  {
    scanf("%f", &X);
    if (X > 0)
    {
      positivo = positivo + 1;
    }
  }
  printf("%i valores positivos\n", positivo);
}