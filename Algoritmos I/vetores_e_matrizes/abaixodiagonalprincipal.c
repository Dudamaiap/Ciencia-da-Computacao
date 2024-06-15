/*Leia um caractere maiúsculo, que indica uma operação que deve ser realizada e uma matriz M[12][12]. Em seguida, calcule e mostre a soma ou a média considerando somente aqueles elementos que estão abaixo da diagonal principal da matriz, conforme ilustrado abaixo (área verde).*/
#include <stdio.h>

int main(void)
{

  char T;
  float M[12][12], soma = 0.0;
  int cont = 0;

  scanf("%s", &T);

  for (int i = 0; i < 12; i++)
  {
    for (int j = 0; j < 12; j++)
    {
      scanf("%f", &M[i][j]);
      if (i > j)
      {
        soma = soma + M[i][j];
        cont++;
      }
    }
  }
  if (T == 'M' && cont > 0)
  {
    soma = soma / cont;
  }

  printf("%.1f\n", soma);
  return 0;
}