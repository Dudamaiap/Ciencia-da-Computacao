// Neste problema você deve ler um número que indica uma coluna de uma matriz na qual uma operação deve ser realizada, um caractere maiúsculo, indicando a operação que será realizada, e todos os elementos de uma matriz M[12][12]. Em seguida, calcule e mostre a soma ou a média dos elementos que estão na área verde da matriz, conforme for o caso. A imagem abaixo ilustra o caso da entrada do valor 5 para a coluna da matriz, demonstrando os elementos que deverão ser considerados na operação.

#include <stdio.h>

int main()
{

  double soma = 0, m[12][12];
  int L, i, j;
  char op[5];

  scanf("%d", &L);
  scanf("%s", &op);

  for (int i = 0; i < 12; i++)
  {
    for (int j = 0; j < 12; j++)
    {
      scanf("%lf", &m[i][j]);
    }
  }
  for (int i = 0; i < 12; i++)
  {
    soma = soma + m[i][L];
  }

  if (op[0] == 'M')
  {
    soma = soma / 12;
  }
  printf("%.1lf\n", soma);
  return 0;
}