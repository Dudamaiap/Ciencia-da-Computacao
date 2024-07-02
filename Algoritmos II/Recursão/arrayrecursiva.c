//• Crie uma função recursiva que some todos os elementos de um array;

#include<stdio.h> 

int SomaArray(int arr[], int tamanho){
  if(tamanho == 0) 
  return 0;
} else{
  return arr[tamanho-1] + SomaArray(arr, tamanho-1);
  }

int main(){
  int arr[] = {1,2,3,4,5,6,7};
  int tamanho = sizeof(arr)/sizeof(arr[0]);

  int soma = somaArray(arr, tamanho);

  printf("A soma de todos os elementos do array é %d. \n", soma);

  return 0; 
}