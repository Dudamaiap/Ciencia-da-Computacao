//Crie uma função que retorne o maior elemento de um vetor 
#include<stdio.h>
int maiorelementodovetor(int *vet, int tamanho){
  int maior = vet[0];
  for(int i = 0; i < tamanho; i++){
    if(*(vet+i)>maior){
      maior = *(vet+i);
    }
    return maior;
  }
}
int main(void){
  int vetor[] = {1,2,3,4,5};
  int tamanho = sizeof(vetor)/sizeof(vetor[0]);

  int maior =  maiorelementodovetor(vetor, tamanho);

  printf("O maior elemento do vetor é %d", maior);
  
  return 0;
}