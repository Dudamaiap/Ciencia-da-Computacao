// Faça um programa que leia 5 valores inteiros. Conte quantos destes valores digitados são pares e mostre esta informação.

#include <stdio.h>

int main(void)
{

  int um, dois, tres, quatro, cinco, contador;

  scanf("%i\n%i\n%i\n%i\n%i\n", &um, &dois, &tres, &quatro, &cinco);

  if (um % 2 == 0)
  {
    contador++;
  }
  if (dois % 2 == 0)
  {
    contador++;
  }
  if (tres % 2 == 0)
  {
    contador++;
  }
  if (quatro % 2 == 0)
  {
    contador++;
  }
  if (cinco % 2 == 0)
  {
    contador++;
  }

  printf("%i valores pares\n", contador);

  return 0;
}