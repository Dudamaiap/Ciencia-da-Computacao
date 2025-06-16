/*Leia um caractere maiúsculo, que indica uma operação que deve ser realizada e uma matriz M[12][12]. Em seguida, calcule e mostre a soma ou a média considerando somente aqueles elementos que estão na área esquerda da matriz, conforme ilustrado abaixo (área verde).

*/
#include <stdio.h>
int main()
{
  int i, j, count = 0, m = 0;
  double M[12][12], soma = 0;
  char o;
  scanf("%c", &o);
  for (i = 0; i <= 11; i++)
  {
    for (j = 0; j <= 11; j++)
    {
      scanf("%lf", &M[i][j]);
    }
  }
  for (i = 1; i <= 11; i++)
  {
    for (j = 0; j <= 11; j++)
    {
      if (j <= m)
      {
        soma += M[i][j];
        count++;
      }
    }

    if (i < 5)
      m++;
    else if (i >= 6)
      m--;
  }
  if (o == 'S')
    printf("%.1lf\n", soma);
  else
    printf("%.1lf\n", soma / count);

  return 0;
}