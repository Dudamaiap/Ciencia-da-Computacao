//Faça um programa que leia um valor N. Este N será o tamanho de um vetor X[N]. A seguir, leia cada um dos valores de X, encontre o menor elemento deste vetor e a sua posição dentro do vetor, mostrando esta informação.

#include <stdio.h>

int main() {
    int N, X[1000], menor, posicao;

    scanf("%d", &N);

    for (int i = 0; i < N; i++) {
        scanf("%d", &X[i]);
        if (i == 0 || X[i] < menor) {
            menor = X[i];
            posicao = i;
        }
    }

    printf("Menor valor: %d\n", menor);
    printf("Posicao: %d\n", posicao);

    return 0;
}
