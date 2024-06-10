/*Você deve fazer um programa que apresente a sequencia conforme o exemplo abaixo.

I=1 J=60
I=4 J=55
I=7 J=50
...
I=? J=0*/
#include <stdio.h>

int main(void)
{

  int i = 1, j;

  for (j = 60; j >= 0; j = j - 5)
  {
    printf("I=%i J=%i\n", i, j);
    i = i + 3;
  }

  return 0;
}