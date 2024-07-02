# Estruturas

- Uma estrutura pode ser vista como um novo tipo de dado, que é formado por composição de variáveis de outros tipos
- Em C, as estruturas são definidas com a palavra-chave `struct`
- As estruturas podem ser utilizadas para representar objetos ou registros em um programa
  Sendo declaradas assim:
  '''
  struct nomestruct{
  tipo1 variavel1;
  tipo2 variavel2;
  ...
  tipon variaveln;
  };
  '''
  Uma estrutura pode ser vista como um agrupamento de dados.
  Exemplo de estrutura:
  **Cadastro de pessoas** todas essas informações são da mesma pessoa portanto podemos agrupá-las.
  '''
  struct cadastro{
  char nome[50];
  int idade;
  char endereco[100];
  };
  '''

  **Porque usar estruturas?**
  Imagina que você precise fazer o cadastro de 4 pessoas diferentes:

'''
char nome1[50], nome2[50], nome3[50], nome4[50]
int idade1, idade2, idade3, idade4
char endereco1[100], endereco2[100], endereco3[100], endereco4[100]
'''
**Agora imagine que você precise fazer o cadastro de 100 pessoas diferentes**

Utilizando da estrutura o mesmo cadastro pode ser feito da seguinte maneira:

'''
struct cadastro{
char nome[50];
int idade;
char endereco[100];
}

struct cadastro cadastro1, cadastro2, cadastro3, cadastro4;
'''

# Array de estruturas

- Um array de estruturas é um agrupamento de estruturas, que podem ser acessadas por um índice
- O array de estruturas é declarado da mesma forma que um array de variáveis

struct cadastro cad[100];

# Estruturas de estruturas

- Uma estrutura de estruturas é uma estrutura que contém outras estruturas como membros

'''
struct endereco{
char rua[50];
int numero;
};
struct cadastro{
char nome[50];
int idade;
struct endereco end;
};
'''
