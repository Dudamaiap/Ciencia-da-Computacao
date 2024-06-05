/*A empresa ABC resolveu conceder um aumento de salários a seus funcionários de acordo com a tabela abaixo:
Salário	Percentual de Reajuste
0 - 400.00              15%
400.01 - 800.00         12%
800.01 - 1200.00        10%
1200.01 - 2000.00        7%
Acima de 2000.00         4%
Leia o salário do funcionário e calcule e mostre o novo salário, bem como o valor de reajuste ganho e o índice reajustado, em percentual.*/
#include <stdio.h>

int main()
{
  float s;

  scanf("%f", &s);

  if (s > 0 && s <= 400.0)
    printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: 15 %%\n", (s + (s * .15)), (s * .15));
  else if (s <= 800.0)
    printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: 12 %%\n", (s + (s * .12)), (s * .12));
  else if (s <= 1200.0)
    printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: 10 %%\n", (s + (s * .10)), (s * .10));
  else if (s <= 2000.0)
    printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: 7 %%\n", (s + (s * .07)), (s * .07));
  else
    printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: 4 %%\n", (s + (s * .04)), (s * .04));
  return 0;
}