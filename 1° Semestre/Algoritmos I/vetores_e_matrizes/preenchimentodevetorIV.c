//Neste problema você deverá ler 15 valores colocá-los em 2 vetores conforme estes valores forem pares ou ímpares. Só que o tamanho de cada um dos dois vetores é de 5 posições. Então, cada vez que um dos dois vetores encher, você deverá imprimir todo o vetor e utilizá-lo novamente para os próximos números que forem lidos. Terminada a leitura, deve-se imprimir o conteúdo que restou em cada um dos dois vetores, imprimindo primeiro os valores do vetor impar. Cada vetor pode ser preenchido tantas vezes quantas for necessário.

#include <stdio.h>

int main() {
    int par[5], impar[5];
    int num, cont_par = 0, cont_impar = 0;

    for (int i = 0; i < 15; i++) {
        scanf("%d", &num);

        if (num % 2 == 0) {
            par[cont_par] = num;
            cont_par++;

            if (cont_par == 5) {
                for (int j = 0; j < 5; j++) {
                    printf("par[%d] = %d\n", j, par[j]);
                }
                cont_par = 0;
            }
        } else {
            impar[cont_impar] = num;
            cont_impar++;

            if (cont_impar == 5) {
                for (int j = 0; j < 5; j++) {
                    printf("impar[%d] = %d\n", j, impar[j]);
                }
                cont_impar = 0;
            }
        }
    }

    for (int i = 0; i < cont_impar; i++) {
        printf("impar[%d] = %d\n", i, impar[i]);
    }

    for (int i = 0; i < cont_par; i++) {
        printf("par[%d] = %d\n", i, par[i]);
    }

    return 0;
}
