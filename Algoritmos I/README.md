# Algoritmos I

## Conceito de algoritmo

Um algoritmo é um conjunto de instruções bem definidas que,permitem resolver um determinado problema ou executar uma tarefa específica. Em termos simples, é um conjunto de passos que descreve como um problema pode ser resolvido de maneira sistemática. Os algoritmos são fundamentais em ciência da computação podendo ser escritos por meio de pseudocódigos, fluxogramas ou diretamente em linguagens de programação. Na disciplina de algoritmos I utilizamos da linguagem C ao longo do semestre.

## Arquitetura de um Computador

Nas primeiras aulas de algoritmos vimos de maneira breve como funciona um computador a partir da arquitetura de Von Neumann. As principais características dessa arquitetura incluem:

- **Unidade Central de Processamento (CPU)**: A CPU é responsavel por executar instruções armazenadas na memória. Ela consiste na Unidade Lógica e Aritmética (ULA), que realiza operações matemáticas e lógicas, e na Unidade de Controle (UC), que coordena as operações do processador.
- **Unidade de Entrada e Saída** : São dispositivos que permitem a interação do computador com o ambiente externo.
- **Sistema de Barramento**: O sistema de barramento permite a transferência de dados e instruções entre a CPU, memória e a Unidade de Entrada/Saída.

## Linguagem C

Nesse tópico estarei fazendo uma breve documentação do que aprendi na **linguagem C aplicada em lógica de programação**

### Estrutura básica da linguagem C

```
#include <stdio.h> // biblioteca responsável pelas entradas e saídas na linguagem C

int main (void) {

    return 0;
}
```

### Comando de saída e entrada

```
#include <stdio.h>
int main (void) {
  printf("Olá, mundo!"); // comando de saída
  scanf("%d", &x); // comando de entrada
  return 0;
  }
```

No comando de entrada é necessário utilizar o operador & que retorna o endereço de uma determinada variável.

### Declaração de variável

A variável é um identificador simbólico associado a um espaço de memória onde são armazenados dados que podem ser medificados durante a execução de um programa.
Na lingugem C a váriavel é declarada da seguinte forma: **Tipo_variavel Nome_variavel**
Ex:

- int soma;
- float preco;

**Tipos de variáveis**
A linguagem C oferece os seguintes tipos de variáveis:

- **Int**: Armazena números inteiros.
- **Float**: Armazena números reais, com menor precisão na parte decimal.
- **Double**:Armazena números reais, com maior precisão na parte decimal.
- **Char**: Armazena caracteres.

### Expressões Relacionais

Expressões relacionais são utilizadas para comparar valores e produzir um resultado lógico.

- == : igualdade
- != : diferente
- .> : maior que
- < : menor que
- .> = : maior ou igual
- <= : menor ou igual

### Expressões Lógicas

Expressões lógicas são utilizadas para combinar resultados de expressões relacionais.

- && : E (AND)
- || : OU (OR)
- ! : NÃO (NOT)

### Comandos Condicionais

Comandos condicionais são utilizados para controlar o fluxo de execução de um programa.

**IF/ELSE**

```
#include<stdio.h>
int main(void){
  if(condição){
    -> faz algo
  } else //senao {
    -> faz outra coisa
  }
  return 0;
}
```

**SWITCH**

```
#include <stdio.h>
int main(void) {
		int num;

		printf("Informe um número de 1 a 5: ");
		scanf ("%d", num);

		switch(num) {
					 case1: printf("Este é o número 1. "); break;
					 case2: printf("Este é o número 2. "); break;
					 case3: printf("Este é o número 3. "); break;
					 case4: printf("Este é o número 4. "); break
					 case5: printf("Este é o número 5. "); break;

					 default: printf("Este número não está entre 1 e 5.");
//a função default serve para quando nenhum dos casos é atendido
}
}
```

### Comandos de repetição

Comandos de repetição são utilizados para executar um bloco de código várias vezes.

**WHILE**

```
#include<stdio.h>
int main(void){

	while(condiçao) {
				 comandos
		}


	return 0;
}
//Enquanto a condição for verdadeira (!=0), ele executa os comandos
```

**DO WHILE**

```
do{comando}
while(condiçao)
```

//Ele executa o comando pelo menos uma vez e só para quando a condição for falsa

**FOR**

```
for(inicio; condição;passo){
comandos}
```

//Ele executa os comandos enquanto a condição for verdadeira, e a cada iteração ele executa o passo.
