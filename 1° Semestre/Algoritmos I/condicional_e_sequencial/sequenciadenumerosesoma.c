// Leia um conjunto não determinado de pares de valores M e N (parar quando algum dos valores for menor ou igual a zero). Para cada par lido, mostre a sequência do menor até o maior e a soma dos inteiros consecutivos entre eles (incluindo o N e M).

#include <stdio.h>

int main()
{

  int n;
  int x, y, aux;
  int soma;

  while (1)
  {

    scanf("%d%d", &x, &y);
    if (x <= 0)
      break;
    if (y <= 0)
      break;

    if (x > y)
    {
      aux = x;
      x = y;
      y = aux;
    }
    soma = 0;
    for (int i = x; i <= y; i++)
    {
      printf("%d ", i);
      soma += i;
    }
    printf("Sum=%d\n", soma);
  }
  return 0;
}