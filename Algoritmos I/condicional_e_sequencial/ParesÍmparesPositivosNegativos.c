// Leia 5 valores Inteiros. A seguir mostre quantos valores digitados foram pares, quantos valores digitados foram ímpares, quantos valores digitados foram positivos e quantos valores digitados foram negativos.

#include <stdio.h>

int main(void)
{

  int um, dois, tres, quatro, cinco, par = 0, impar = 0, positivo = 0, negativo = 0;

  scanf("%i\n%i\n%i\n%i\n%i\n", &um, &dois, &tres, &quatro, &cinco);

  if (um % 2 == 0)
  {
    par++;
  }
  else
  {
    impar++;
  }
  if (um > 0)
  {
    positivo++;
  }
  else if (um < 0)
  {
    negativo++;
  }

  if (dois % 2 == 0)
  {
    par++;
  }
  else
  {
    impar++;
  }
  if (dois > 0)
  {
    positivo++;
  }
  else if (dois < 0)
  {
    negativo++;
  }

  if (tres % 2 == 0)
  {
    par++;
  }
  else
  {
    impar++;
  }
  if (tres > 0)
  {
    positivo++;
  }
  else if (tres < 0)
  {
    negativo++;
  }

  if (quatro % 2 == 0)
  {
    par++;
  }
  else
  {
    impar++;
  }
  if (quatro > 0)
  {
    positivo++;
  }
  else if (quatro < 0)
  {
    negativo++;
  }

  if (cinco % 2 == 0)
  {
    par++;
  }
  else
  {
    impar++;
  }
  if (cinco > 0)
  {
    positivo++;
  }
  else if (cinco < 0)
  {
    negativo++;
  }

  printf("%i valor(es) par(es)\n", par);
  printf("%i valor(es) impar(es)\n", impar);
  printf("%i valor(es) positivo(s)\n", positivo);
  printf("%i valor(es) negativo(s)\n", negativo);

  return 0;
}
