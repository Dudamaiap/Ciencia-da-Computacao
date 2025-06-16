/*Crie uma função que troque o valor de dois números inteiros passados por referência.*/

#include <stdio.h>
int troca(int *n1, int *n2)
{
  int aux = *n1;
  *n1 = *n2;
  *n2 = aux;
}
int main(void)
{

  int n1, n2;

  printf("Insira dois números:\n ");
  scanf("%d %d", &n1, &n2);

  troca(&n1, &n2);

  printf("\nOs numeros trocados: \n %d %d", n1, n2);

  return 0;
}