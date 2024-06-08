/*Leia uma quantidade indeterminada de duplas de valores inteiros X e Y. Escreva para cada X e Y uma mensagem que indique se estes valores foram digitados em ordem crescente ou decrescente.*/

#include <stdio.h>

int main()
{

  int X, Y;

  while (X != Y)
  {
    scanf("%d", &X);
    scanf("%d", &Y);

    if (X > Y)
    {
      printf("Decrescente\n");
    }
    else if (X < Y)
    {
      printf("Crescente\n");
    }
  }

  return 0;
}