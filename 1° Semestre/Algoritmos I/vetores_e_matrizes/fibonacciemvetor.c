//Faça um programa que leia um valor e apresente o número de Fibonacci correspondente a este valor lido. Lembre que os 2 primeiros elementos da série de Fibonacci são 0 e 1 e cada próximo termo é a soma dos 2 anteriores a ele. Todos os valores de Fibonacci calculados neste problema devem caber em um inteiro de 64 bits sem sinal.

#include <stdio.h>

int main(void) {
  int T, N;
  unsigned long long int Fib[61];

  Fib[0] = 0;
  Fib[1] = 1;

  for(int i = 2 ; i <= 60 ; i++){
    Fib[i] = Fib[i-1] + Fib[i-2];
  }

  scanf("%d", &T);

  for(int i=0 ; i<T ; i++){
    scanf("%d",&N);
    printf("Fib(%d) = %llu\n", N, Fib[N]);
  }
  
  return 0;
}