//Leia um valor e faça um programa que coloque o valor lido na primeira posição de um vetor N[10]. Em cada posição subsequente, coloque o dobro do valor da posição anterior. Por exemplo, se o valor lido for 1, os valores do vetor devem ser 1,2,4,8 e assim sucessivamente. Mostre o vetor em seguida.

#include <stdio.h>
int main(void) {

  int N[10], num;

  scanf("%d", &num);
  N[0] = num;

  for (int i = 1 ; i < 10 ; i++) {
    N[i] = N[i-1] * 2;
  }
  
  for (int i = 0 ; i < 10 ; i++) {
    printf("N[%d] = %d\n", i, N[i]);
  }
  return 0;
}