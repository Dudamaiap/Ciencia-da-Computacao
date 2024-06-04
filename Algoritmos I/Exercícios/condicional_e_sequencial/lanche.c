/*Com base na tabela abaixo, escreva um programa que leia o código de um item e a quantidade deste item. A seguir, calcule e mostre o valor da conta a pagar.
1 Cachorro Quente R$4.00
2 X-Salada R$4.50
3 X-Bacon R$5.00
4 Torrada Simples R$2.00
5 Refrigerante R$1.50
*/
#include <stdio.h>
int main(void)
{

  int item, quant;
  float total, preco;

  scanf("%i", &item);
  scanf("%i", &quant);

  switch (item)
  {
  case 1:
    preco = 4;
    break;
  case 2:
    preco = 4.5;
    break;
  case 3:
    preco = 5;
    break;
  case 4:
    preco = 2;
    break;
  case 5:
    preco = 1.5;
    break;

  default:
    printf("Código inválido!");
  }
  total = (preco * quant);
  printf("Total: R$ %.2f\n", total);

  return 0;
}