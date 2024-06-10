/*Escreva um programa que repita a leitura de uma senha até que ela seja válida. Para cada leitura de senha incorreta informada, escrever a mensagem "Senha Invalida". Quando a senha for informada corretamente deve ser impressa a mensagem "Acesso Permitido" e o algoritmo encerrado. Considere que a senha correta é o valor 2002.*/
#include <stdio.h>

int main()
{

  int senha = 1;

  while (senha != 2002)
  {

    scanf("%d", &senha);

    if (senha == 2002)
    {
      printf("Acesso Permitido\n");
    }
    else if (senha != 2002)
    {
      printf("Senha Invalida\n");
    }
  }

  return 0;
}