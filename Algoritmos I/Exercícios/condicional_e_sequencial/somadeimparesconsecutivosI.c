// Leia 2 valores inteiros X e Y. A seguir, calcule e mostre a soma dos números impares entre eles.

#include <stdio.h>

int main(void)
{

  int cont, v1, v2, aux, soma;

  scanf("%i %i", &v1, &v2);
  soma = 0;

  if (v1 > v2)
  {
    aux = v1;
    v1 = v2;
    v2 = aux;
  }
  if (v1 % 2 != 0)
  {
    for (cont = v1 + 2; cont < v2; cont++)
    {
      if (cont % 2 != 0)
      {
        soma += cont;
      }
    }
  }
  else
  {
    for (cont = v1 + 1; cont < v2; cont++)
    {
      if (cont % 2 != 0)
        soma += cont;
    }
  }
  printf("%i\n", soma);

  return 0;
}