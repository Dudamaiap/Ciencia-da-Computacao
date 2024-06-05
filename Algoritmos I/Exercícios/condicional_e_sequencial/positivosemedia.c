// Leia 6 valores. Em seguida, mostre quantos destes valores digitados foram positivos. Na próxima linha, deve-se mostrar a média de todos os valores positivos digitados, com um dígito após o ponto decimal.

#include <stdio.h>
int main(void)
{

  float valor, media;
  int positivo, contador;

  positivo = 0;
  contador = 0;

  for (contador = 1; contador <= 6; contador++)
  {
    scanf("%f", &valor);
    if (valor > 0)
    {
      positivo++;
      media = media + valor;
    }
  }
  printf("%i valores positivos\n", positivo);
  printf("%.1f\n", media / positivo);

  return 0;
}