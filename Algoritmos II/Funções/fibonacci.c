/*Crie uma função que retorne o n-ésimo termo da sequência de fibonnaci.*/

#include <stdio.h>

int fibonacci(int n)
{
  if (n <= 1)
  {
    return n;
  }
  else
  {
    return fibonacci(n - 1) + fibonacci(n - 2);
  }
}

int main()
{
  int termo;
  printf("Digite o termo da sequência de Fibonacci que deseja calcular: ");
  scanf("%d", &termo);

  int resultado = fibonacci(termo);

  printf("O %d-ésimo termo da sequência de Fibonacci é: %d\n", termo, resultado);

  return 0;
}