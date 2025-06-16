// Leia a hora inicial e a hora final de um jogo. A seguir calcule a duração do jogo, sabendo que o mesmo pode começar em um dia e terminar em outro, tendo uma duração mínima de 1 hora e máxima de 24 horas.
#include <stdio.h>
int main(void)
{
  int a, b;
  scanf("%d%d", &a, &b);
  if (a == b)
    printf("O JOGO DUROU %d HORA(S)\n", 24 - a + b);
  else if (a <= b)
    printf("O JOGO DUROU %d HORA(S)\n", b - a);
  else
    printf("O JOGO DUROU %d HORA(S)\n", 24 - a + b);
  return 0;
}