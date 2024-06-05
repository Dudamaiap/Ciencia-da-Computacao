/*Em um país imaginário denominado Lisarb, todos os habitantes ficam felizes em pagar seus impostos, pois sabem que nele não existem políticos corruptos e os recursos arrecadados são utilizados em benefício da população, sem qualquer desvio. A moeda deste país é o Rombus, cujo símbolo é o R$.

Leia um valor com duas casas decimais, equivalente ao salário de uma pessoa de Lisarb. Em seguida, calcule e mostre o valor que esta pessoa deve pagar de Imposto de Renda, segundo a tabela abaixo.

RENDA                    Imposto
de 0.00 a R$2000         Isento
de R$2000.01 até R$3000    8%
de R$3000.01 até R$4500    18%
de R$4500.01 até R$7000    28%
Lembre que, se o salário for R$ 3002.00, a taxa que incide é de 8% apenas sobre R$ 1000.00, pois a faixa de salário que fica de R$ 0.00 até R$ 2000.00 é isenta de Imposto de Renda. No exemplo fornecido (abaixo), a taxa é de 8% sobre R$ 1000.00 + 18% sobre R$ 2.00, o que resulta em R$ 80.36 no total. O valor deve ser impresso com duas casas decimais.*/

#include <stdio.h>

int main()
{
  double sal;
  scanf("%lf", &sal);

  if (sal <= 2000.00)
  {
    printf("Isento\n");
  }
  else if (sal >= 2000.01 && sal <= 3000.00)
  {
    printf("R$ %.2f\n", (sal - 2000.00) * 0.08);
  }
  else if (sal >= 3000.01 && sal <= 4500.00)
  {
    printf("R$ %.2f\n", ((sal - 3000.00) * 0.18 + 1000.00 * 0.08));
  }
  else if (sal >= 4500.01)
  {
    printf("R$ %.2f\n", ((sal - 4500.00) * 0.28 + 1500.00 * 0.18 + 1000.00 * 0.08));
  }
  return 0;
}