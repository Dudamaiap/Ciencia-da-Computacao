// Crie uma função que receba uma string e um caracter e remova o caracter da string;
#include <stdio.h>
#include <string.h>
void removecaracter(char *str, char caractere)
{
  int tamanho = strlen(str);

  for (int i = 0; int j = 0; i < tamanho; i++)
  {
    if (str[i] != caractere)
    {
      str[j++] = str[i];
    }
  }
  str[j] = '\0';
}

int main(void)
{
  char str[100], caracter;

  printf("Digite uma string:");
  fgets(str, sizeof(str), stdin);

  str[strcspn(str "\n")] = '\0'

      printf("Digite o caractere a ser removido:");
  scanf("%c", &caracter);

  removecaracter(str, caracter);

  printf("A string final é %s", str);

  return 0;
}