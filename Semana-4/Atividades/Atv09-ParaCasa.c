/*
    Escreva um programa que receba o modelo e o preço de 4 carros.
    O programa deverá informar qual é o carro mais barato e qual o mais caro.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char modelos[4][50];
    float precos[4];

    int maisBarato = 0, maisCaro = 0;

    for (int i = 0; i < 4; i++) {
        printf("Digite o modelo do %d carro: ", i + 1);
        fgets(modelos[i], sizeof(modelos[i]), stdin);

        modelos[i][strcspn(modelos[i], "\n")] = '\0';

        printf("Digite o preco do %d carro: R$ ", i + 1);
        scanf("%f", &precos[i]);

        getchar();
    }

    for (int i = 1; i < 4; i++) {
        if (precos[i] < precos[maisBarato]) {
            maisBarato = i;
        }

        if (precos[i] > precos[maisCaro]) {
            maisCaro = i;
        }
    }

    printf("\nCarro mais barato:\n");
    printf("Modelo: %s\n", modelos[maisBarato]);
    printf("Preco: R$ %.2f\n", precos[maisBarato]);

    printf("\nCarro mais caro:\n");
    printf("Modelo: %s\n", modelos[maisCaro]);
    printf("Preco: R$ %.2f\n", precos[maisCaro]);

    return 0;
}