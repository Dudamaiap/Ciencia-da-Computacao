/*Escreva um algoritmo que leia um inteiro N (0 ≤ N ≤ 100), correspondente a ordem de uma matriz M de inteiros, e construa a matriz de acordo com o exemplo abaixo.

*/
#include <stdio.h>

int main()
{
  int N;

  while (1)
  {
    scanf("%d", &N);
    if (N == 0)
      break;

    for (int i = 0; i < N; i++)
    {
      for (int j = 0; j < N; j++)
      {
        int value;
        if (i < j)
          value = 1 + i;
        else
          value = 1 + j;

        if (value < N - i)
          value = value;
        else
          value = N - i;

        if (value < N - j)
          value = value;
        else
          value = N - j;

        printf("%3d", value);

        if (j < N - 1)
          printf(" ");
      }
      printf("\n");
    }
    printf("\n");
  }

  return 0;
}
