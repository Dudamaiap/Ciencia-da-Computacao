/*Crie uma estrutura Veiculo com modelo, marca, cor, ano e valor. Crie um vetor de 10 posições de Veiculo e preencha os dados e crie uma função que imprima os dados do veículo mais caro.*/

#include <stdio.h>

struct Veiculo
{
  char modelo[50];
  char marca[50];
  char cor[20];
  int ano;
  double valor;
};

void veiculomaiscaro(struct Veiculo veiculos[], double maiscaro)
{
  maiscaro = veiculos[0].valor;
  int contador = 0;
  for (int i = 0; i < 10; i++)
  {
    if (veiculos[i].valor > maiscaro)
    {
      maiscaro = veiculos[i].valor;
      contador = i;
    }
  }
  printf("O veículo mais caro é: ");
  printf("Modelo %s\n", veiculos[contador].modelo);
  printf("Marca %s\n", veiculos[contador].marca);
  printf("Cor %s\n", veiculos[contador].cor);
  printf("Ano %d\n", veiculos[contador].ano);
  printf("Valor %d\n", veiculos[contador].valor);
}

int main(void)
{

  struct Veiculo veiculos[10];

  for (int i = 0; i < 10; i++)
  {
    printf("Qual o modelo do veículo? ");
    scanf("%s", veiculos[i].modelo);
    printf("Qual a marca do veículo? ");
    scanf("%s", veiculos[i].marca);
    printf("Qual a cor do veículo? ");
    scanf("%c", veiculos[i].cor);
    printf("Qual o ano do veículo? ");
    scanf("%d", &veiculos[i].ano);
    printf("Qual o valor do veículo? ");
    scanf("%lf", &veiculos[i].valor);
  }

  veiculomaiscaro(veiculos, 0);
  return 0;
}