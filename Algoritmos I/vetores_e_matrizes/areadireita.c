/*Leia um caractere maiúsculo, que indica uma operação que deve ser realizada e uma matriz M[12][12]. Em seguida, calcule e mostre a soma ou a média considerando somente aqueles elementos que estão na área direita da matriz, conforme ilustrado abaixo (área verde).

*/
#include <stdio.h>
int main()
{
  int i, j, count = 0, m = 11;
  double a[12][12], sum = 0;
  char o;
  scanf("%c", &o);
  for (i = 0; i <= 11; i++)
  {
    for (j = 0; j <= 11; j++)
    {
      scanf("%lf", &a[i][j]);
    }
  }
  for (i = 1; i <= 11; i++)
  {
    for (j = 0; j <= 11; j++)
    {
      if (j >= m)
      {
        sum += a[i][j];
        count++;
      }
    }

    if (i < 5)
      m--;
    else if (i >= 6)
      m++;
  }
  if (o == 'S')
    printf("%.1lf\n", sum);
  else
    printf("%.1lf\n", sum / count);

  return 0;
}