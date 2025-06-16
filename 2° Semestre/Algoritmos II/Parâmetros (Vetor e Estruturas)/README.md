# Arrays como parâmetros

- Arrays são sempre passados por referências para uma função,
- É necessário declarar um segundo parâmetro para passar para a função o tamanho do array separadamente
- Para arrays com mais de uma dimensão, é necessário especificar o tamanho das dimensões, exceto a primeira

# Struct como parâmetro

- Podemos passar uma struct por parâmetro ou por referência
  • Temos duas possibilidades
  • Passar por parâmetro toda a struct
  • Passar por parâmetro apenas um campo específico da struct

**Passar por parâmetro apenas um campo específico da struct**
• Valem as mesmas regras vistas até o momento
• Cada campo da struct é como uma variável independente. Ela pode, portanto, ser
passada individualmente por valor ou por referência

**Passar por parâmetro toda a struct**
• **Passagem por valor**
• Valem as mesmas regras vistas até o momento
• A struct é tratada com uma variável qualquer e seu valor é copiado para dentro da
função
• **Passagem por referência**
• Valem as regras de uso do asterisco “\*” e operador de endereço “&”
• Devemos acessar o conteúdo da struct para somente depois acessar os seus campos
e modificá-los.
• Uma alternativa é usar o operador seta “->”

# Ordenação

## Bubble Sort

- **Comparação de Adjacentes:** Inicia na primeira posição do array e compara o elemento atual com o próximo (elemento adjacente). Se o elemento atual for maior que o próximo, eles são trocados.
  • **Repetição sem o último elemento:** o processo se repete, mas desta vez até o penúltimo elemento.
  • **Finalização antecipada:** Se durante uma passagem pelo array nenhuma
  troca for realizada, isso significa que o array já está ordenado.
  ```
  void bubbleSort(int array[], int tam){
  int aux;
  for(int i = 0; i < tam; i++){
  int troca = 0;
  for(int j = 0; j < tam - 1; j++){
  if(array[j] > array[j + 1]){
  aux = array[j];
  array[j] = array[j + 1];
  array[j + 1] = aux;
  troca = 1;
  }
  }
  if(troca == 0)
  break;
  }
  }
  ```
