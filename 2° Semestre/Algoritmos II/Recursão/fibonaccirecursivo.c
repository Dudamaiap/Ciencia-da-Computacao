// Utilizando recursividade faça o fibonacci

#include <stdio.h>

int fibonacci(int n)
{
  if (n == 0)
  {
    return 0;
  }
  else if (n == 1)
  {
    return 1;
  }
  else
  {
    return fibonacci(n - 1) + fibonacci(n - 2);
  }
}

int main(void)
{
  int numero;
  printf("Digite um número: ");
  scanf("%d", &numero);

  if (numero < 0)
  {
    printf("Número inválido!\n");
  }
  else
  {
    printf("O número %d da sequência de Fibonacci é: %d\n", numero, fibonacci(numero));
  }
  return 0;
}