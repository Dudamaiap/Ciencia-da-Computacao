// Leia 3 valores inteiros e ordene-os em ordem crescente. No final, mostre os valores em ordem crescente, uma linha em branco e em seguida, os valores na sequência como foram lidos.

#include <stdio.h>
int main(void)
{

  int x, y, z, maior, meio, menor;

  scanf("%d", &x);
  scanf("%d", &y);
  scanf("%d", &z);

  if (x >= y && x >= z)
  {
    maior = x;
  }
  else if (y >= x && y >= z)
  {
    maior = y;
  }
  else
  {
    maior = z;
  }

  if (x <= y && x <= z)
  {
    menor = x;
  }
  else if (y <= x && y <= z)
  {
    menor = y;
  }
  else
  {
    menor = z;
  }

  if (x != maior && x != menor)
  {
    meio = x;
  }
  else if (y != maior && y != menor)
  {
    meio = y;
  }
  else
  {
    meio = z;
  }

  printf("%d\n%d\n%d\n", menor, meio, maior);
  printf("\n");
  printf("%d\n%d\n%d\n", x, y, z);
  return 0;
}
