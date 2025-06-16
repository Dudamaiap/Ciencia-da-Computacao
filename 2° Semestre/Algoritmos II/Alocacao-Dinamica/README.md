# Alocação Dinâmica

## Definição

A alocação dinâmica é a alocação de memória que ocorre durante a execução do programa.
Na linguagem C usa apenas 4 funções para a alocação dinâmica, disponíveis na biblioteca stdlib.h

- malloc
- calloc
- realloc
- free

## Malloc

A função malloc é usada para alocar memória dinamicamente. Ela tem o seguinte protótipo ` void *malloc(unsigned int num);`

Onde `num` é o número de bytes a serem alocados. O retorno da
função é um ponteiro para o início da área alocada. Se a alocação for bem sucedida, o ponteiro aponta para o início da área alocada. Se não houver memória suficiente para a alocação, o ponteiro é nulo.

- Alocar 1000 bytes de memória livre
  char _p;
  p = (char _) malloc(1000);
- Alocar espaço para 50 inteiros
  int _p;
  p = (int _) malloc(50 \* sizeof(int));

Faça um programa para cadastrar o preço de N produtos, em que N é um valor informado pelo usuário, usando alocação dinâmica.

```
int n;
scanf("%d", &n);
int *produtos = malloc(n * sizeof(int));
if(produtos == NULL){
  printf("Erro ao alocar memória\n");
  return 1;
}
free (produtos);
```

## Calloc

A função calloc é usada para alocar memória dinamicamente. Mas ela tem o protótipo um pouco diferente:
`void *calloc(unsigned int num, unsigned int size);`

## Realoc

A função realloc é usada para realocar memória dinamicamente. Ela tem o seguinte protótipo:
`void *realloc (void *ptr, unsigned int num);`

## Free

Ao contrário das variáveis definidas durante o programa, as variáveis alocadas dinamicamente não são liberadas automaticamente pelo programa.
Para liberar a memória alocada, deve-se usar a função free. Ela tem o seguinte protótipo:
`void free(void *p);`

**Qual a diferença entre todos eles?**
O malloc aloca memória vazia, ou seja, sem nenhum valor armazenado.
O calloc aloca memória vazia e inicializa todos os bytes com o valor 0.
O realloc realoca memória, ou seja, aumenta ou diminui o tamanho da memória
Em outros termos:
Em termos mais técnicos:

### Resumo

- malloc: Aloca memória não inicializada.
- calloc: Aloca e inicializa a memória para zero.
- realloc: Redimensiona a memória previamente alocada.
- free: Libera a memória alocada.
