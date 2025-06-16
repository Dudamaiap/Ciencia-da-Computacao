// Crie uma função que inverta uma string

#include <stdio.h>
#include <string.h>

void inverterstring(char *origem, char *resultado)
{
  int tamanho = strlen(origem);
  if (origem[tamanho - 1] == '\n')
  {
    origem[tamanho - 1] = '\0';
    tamanho--;
    }
  for (int i = 0; i < tamanho; i++)
  {
    resultado[i] = origem[tamanho - i - 1];
  }
  resultado[tamanho] = '\0';
}
int main()
{
  char origem[100], resultado[100];

  printf("Digite a string a ser invertida:");
  fgets(origem, 100, stdin);

  inverterstring(origem, resultado);

  printf("A string invertida fica %s", resultado);

  return 0;
}
