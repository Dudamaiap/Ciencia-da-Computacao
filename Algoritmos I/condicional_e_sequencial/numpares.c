// Imprima todos os números pares entre 1 e 100, inclusive se for o caso, um em cada linha.

#include <stdio.h>

int main(void)
{

  int i;

  for (i = 2; i <= 100; i++)
  {
    if (i % 2 == 0)
    {
      printf("%d\n", i);
    }
  }
  return 0;
}