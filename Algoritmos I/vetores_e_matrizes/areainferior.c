/*Leia um caractere maiúsculo, que indica uma operação que deve ser realizada e uma matriz M[12][12]. Em seguida, calcule e mostre a soma ou a média considerando somente aqueles elementos que estão na área inferior da matriz, conforme ilustrado abaixo (área verde).

*/
#include <stdio.h>
int main()
{
  double a = 0.0, M[12][12];
  char T[2];
  int C, x, y, z, p = 6, q = 5;
  scanf("%s", &T);
  for (x = 0; x <= 11; x++)
  {
    for (y = 0; y <= 11; y++)
      scanf("%lf", &M[x][y]);
  }
  for (z = 7; z <= 11; z++)
  {
    for (C = q; C <= p; C++)
      a += M[z][C];
    p++;
    q--;
  }
  if (T[0] == 'S')
    printf("%.1lf\n", a);
  else if (T[0] == 'M')
  {
    a = a / 30.0;
    printf("%.1lf\n", a);
  }
  return 0;
}