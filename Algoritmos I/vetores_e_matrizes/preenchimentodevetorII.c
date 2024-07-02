//Faça um programa que leia um valor T e preencha um vetor N[1000] com a sequência de valores de 0 até T-1 repetidas vezes, conforme exemplo abaixo. Imprima o vetor N.

#include<stdio.h>
int main(void){

		int T, N[1000];
		
		scanf("%d", &T);
		
		for(int i = 0 ; i < 1000 ; i++){
				N[i] = i%T;
		}
		
		for(int i = 0; i < 1000 ; i++){
				printf("N[%d] = %d\n",i , N[i]);
		}
	return 0;
}