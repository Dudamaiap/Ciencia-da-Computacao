// • Crie um vetor de Alunos de 10 posições e preencha-os dados.

#include <stdio.h>
#include <string.h>

typedef struct
{
  char nome[50];
  int matricula;
  float coeficiente;
} Aluno;

void ordernarAlunosDecrescente(Aluno alunos[], int tamanho)
{
  Aluno temp; 
  for (int i = 0; i < tamanho - 1; i++)
  {
    for (int j = i + 1; j < tamanho; j++)
    {
      if (alunos[i].coeficiente < alunos[j].coeficiente)
      {
        temp = alunos[i];
        alunos[i] = alunos[j];
        alunos[j] = temp;
      }
    }
  }
}

int main(void)
{
  Aluno alunos[10];

  strcpy(alunos[0].nome, "Alice");
  alunos[0].matricula = 12345;
  alunos[0].coeficiente = 8.5;

  strcpy(alunos[1].nome, "Bob");
  alunos[1].matricula = 54321;
  alunos[1].coeficiente = 7.3;

  ordernarAlunosDecrescente(alunos, 10);

  printf("Alunos ordenados por coeficiente (decrescente):\n");
  for (int i = 0; i < 10; i++)
  {
    printf("Nome: %s, Matricula: %d, Coeficiente: %.2f\n", alunos[i].nome, alunos[i].matricula, alunos[i].coeficiente);
  }

  return 0;