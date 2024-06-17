/*Crie uma estrutura que contenha a informação de um ponto e crie uma função que calcule a distância entre dois pontos. Deve ser passado como parâmetro o tipo Ponto.*/

#include <stdio.h>
#include <math.h>

typedef struct
{
  double x;
  double y;
} Pontos;

double calculodistancia(Pontos p1, Pontos p2)
{
  double distancia;
  distancia = sqrt(pow(p2.x - p1.x, 2) + pow(p2.y - p1.y, 2));
  return distancia;
}

int main(void)
{
  Pontos ponto1, ponto2;

  printf("Insira as coordenadas do ponto 1: ");
  scanf("%lf %lf", &ponto1.x, &ponto1.y);

  printf("Insira as coordenadas do ponto 2: ");
  scanf("%lf %lf", &ponto2.x, &ponto2.y);

  double distancia = calculodistancia(ponto1, ponto2);

  printf("A distância entre os pontos é %.2lf", distancia);

  return 0;
}