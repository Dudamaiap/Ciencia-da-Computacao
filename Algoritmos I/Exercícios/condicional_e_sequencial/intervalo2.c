/*Leia um valor inteiro N. Este valor será a quantidade de valores inteiros X que serão lidos em seguida.
Mostre quantos destes valores X estão dentro do intervalo [10,20] e quantos estão fora do intervalo, mostrando essas informações.*/

#include <stdio.h>

int main(void)
{

  int N, cont, dentro = 0, fora = 0, X;

  scanf("%i", &N);

  for (cont = 1; cont <= N; cont++)
  {
    scanf("%i", &X);
    if (10 <= X && X <= 20)
    {
      dentro++;
    }
    else
    {
      fora++;
    }
  }
  printf("%i in\n", dentro);
  printf("%i out\n", fora);

  return 0;
}