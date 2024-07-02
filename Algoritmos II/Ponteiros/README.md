# Ponteiros

## Definição

É um espaço reservado de memória usado para guardar o **endereço de memória** de uma outra variável.

## Declaração

- É o asterisco(\*) que informa ao compilador que aquela variável não vai guardar um valor mas sim um endereço para o tipo especificado.

```
int x;
float y;
struct ponto p;

int *x;
float *y;
struct ponto \*p;
```

Na linguagem C, quando declaramos um ponteiro, informamos ao compilador para que tipo de variável vamos apontá-lo.

- Um ponteiro int\* aponta para um inteiro
- Esse ponteiro guarda o endereço de memória onde se encontra armazenada uma variável do tipo **int**

## Inicialização

- O ponteiro armazena o endereço da variável para onde ele aponta.
- Para saber o endereço de memória de uma variável do nosso programa usamos o operador &
  ```
  int main(){
  int c = 10;
  int \*p;
  p = &c;
  return 0;
  }
  ```

## Utilização

- Para acessar o valor guardado dentro de uma posição de memória apontada por um ponteiro, basta usar do operador asterisco(*) na frente do nome do ponteiro
  '*p = 12'

## Operação com ponteiros

- **Atribuição**
- **Aritméticas:** apneas duas operações podem ser utilizadas com o endereço armazenado pelo ponteiro: Adição e Subtração
  p++
- soma +1 no endereço armazenado no ponteiro
  p--
  \*subtrai 1 no endereço armazenado no ponteiro
  p+15
- soma +15 no endereço armazenado no ponteiro
- **Relacionais**
