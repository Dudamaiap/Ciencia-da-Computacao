// Leia um valor inteiro X. Em seguida apresente os 6 valores ímpares consecutivos a partir de X, um valor por linha, inclusive o X ser for o caso.

#include <stdio.h>

int main(void)
{

  int X, i = 1;

  scanf("%i", &X);

  while (i < 7)
  {
    if (X % 2 != 0)
    {
      printf("%i\n", X);
      i++;
    }
    X++;
  }
  return 0;
}