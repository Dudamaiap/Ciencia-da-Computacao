/*Escreva um programa para ler as notas da primeira e a segunda avaliação de um aluno. Calcule e imprima a média semestral. O programa só deverá aceitar notas válidas (uma nota válida deve pertencer ao intervalo [0,10]). Cada nota deve ser validada separadamente.

No final deve ser impressa a mensagem “novo calculo (1-sim 2-nao)”, solicitando ao usuário que informe um código (1 ou 2) indicando se ele deseja ou não executar o algoritmo novamente, (aceitar apenas os código 1 ou 2). Se for informado o código 1 deve ser repetida a execução de todo o programa para permitir um novo cálculo, caso contrário o programa deve ser encerrado.*/
#include <stdio.h>

int main(void)
{
  double nota1, nota2, media;
  int novo_calculo;

  do
  {
    while (1)
    {
      scanf("%lf", &nota1);
      if (nota1 >= 0 && nota1 <= 10)
      {
        break;
      }
      else
      {
        printf("nota invalida\n");
      }
    }

    while (1)
    {
      scanf("%lf", &nota2);
      if (nota2 >= 0 && nota2 <= 10)
      {
        break;
      }
      else
      {
        printf("nota invalida\n");
      }
    }

    media = (nota1 + nota2) / 2.0;
    printf("media = %.2lf\n", media);

    while (1)
    {
      printf("novo calculo (1-sim 2-nao)\n");
      scanf("%d", &novo_calculo);
      if (novo_calculo == 1 || novo_calculo == 2)
      {
        break;
      }
      else
      {
      }
    }

  } while (novo_calculo == 1);

  return 0;
}
