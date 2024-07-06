// Crie 03 matrizes dinamicamente, A, B e R. Verifique se é possível fazer a multiplicação de AxB e armazene em R.

#include <stdio.h>
#include <stdlib.h>

int **alocamatriz(int linhas, int colunas)
{
  int **matriz = (int **)malloc(linhas * sizeof(int *));
  for (int i = 0; i < linhas; i++)
  {
    matriz[i] = (int *)malloc(colunas * sizeof(int));
  }
  return matriz;
}

void liberarmatriz(int **matriz, int linhas)
{
  for (int i = 0; i < linhas; i++)
  {
    free(matriz[i]);
  }
  free(matriz);
}

int main()
{
  int linhasA, colunasA, linhasB, colunasB;

  printf("Digite o número das linhas da matriz A:");
  scanf("%d", &linhasA);
  printf("Digite o número das colunas da matriz A:");
  scanf("%d", &colunasA);

  printf("Digite o núemro das linhas da matriz B:");
  scanf("%d", &linhasB);
  printf("Digite o número das colunas da matriz B:");
  scanf("%d", &colunasB);

  if (colunasA != linhasB)
  {
    printf("Multiplicação não é possível. O número de colunas de A deve ser igual ao número de linhas de B.\n");
    return 1;
  }

  int **A = alocamatriz(linhasA, colunasA);
  int **B = alocamatriz(linhasB, colunasB);
  int **R = alocamatriz(linhasA, colunasB);
  printf("Digite os elementos da matriz A:\n");
  for (int i = 0; i < linhasA; i++)
  {
    for (int j = 0; j < colunasA; j++)
    {
      scanf("%d", &A[i][j]);
    }
  }

  printf("Digite os elementos da matriz B:\n");
  for (int i = 0; i < linhasB; i++)
  {
    for (int j = 0; j < colunasB; j++)
    {
      scanf("%d", &B[i][j]);
    }
  }

  for (int i = 0; i < linhasA; i++)
  {
    for (int j = 0; j < colunasB; j++)
    {
      R[i][j] = 0;
      for (int k = 0; k < colunasA; k++)
      {
        R[i][j] += A[i][k] * B[k][j];
      }
    }
  }

  printf("A matriz resultante R é:\n");
  for (int i = 0; i < linhasA; i++)
  {
    for (int j = 0; j < colunasB; j++)
    {
      printf("%d ", R[i][j]);
    }
    printf("\n");
  }

  libera_matriz(A, linhasA);
  libera_matriz(B, linhasB);
  libera_matriz(R, linhasA);

  return 0;
}
