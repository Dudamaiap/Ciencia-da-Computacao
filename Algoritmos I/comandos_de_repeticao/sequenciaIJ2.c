/*Você deve fazer um programa que apresente a sequencia conforme o exemplo abaixo.

I=1 J=7
I=1 J=6
I=1 J=5
I=3 J=7
I=3 J=6
I=3 J=5
...
I=9 J=7
I=9 J=6
I=9 J=5*/
#include <stdio.h>

int main(void)
{

  int i, j;

  for (i = 1; i <= 9; i = i + 2)
  {
    for (j = 7; j >= 5; j--)
    {
      printf("I=%i J=%i\n", i, j);
    }
  }
  return 0;
}