// Faça um fatorial recursivo

#include <stdio.h>
int fatorial(int n)
{
  if (n == 0 || n == 1)
  {
    return 1;
  }
  else
  {
    return n * fatorial(n - 1);
  }

  int main()
  {
    int numero;

    printf("Digite um número:")
        scanf("%d", &numero);

    if (numero < 0)
    {
      printf("Número inválido");
    }
    else
    {
      printf("O fatorial de %d é %d", numero, fatorial(numero));
    }
    return 0;
  }
}