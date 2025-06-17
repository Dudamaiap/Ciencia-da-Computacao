/*Crie um estrutura para agenda de compromissos. Com compromisso(50 char) e data. A data deve ser outra estrutura de dados contendo dia, mês e ano. Leia dois inteiros A e M e mostre os compromissos do mês M do ano A*/

#include <stdio.h>
struct Data
{
  int dia;
  int mes;
  int ano;
};
struct Agenda
{
  char compromisso[50];
  struct Data data;
};

int main(void)
{
  int A, M;

  printf("Digite o mês: ");
  scanf("%d", &M);

  printf("Digite o ano: ");
  scanf("%d", &A);

  return 0;
}