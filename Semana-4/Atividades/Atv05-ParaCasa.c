/*
    Escreva um programa que receba 10 números inteiros
    e o liste na tela de traz pra frente.
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {

    system("cmd /c cls");

    int numeros[10];

    for(int i = 0; i < 10; i++) {
        printf("Informe o numero na posicao %d: ", i);
        scanf("%d", &numeros[i]);
    }

    printf("\nDo ultimo para o primeiro:\n");

    for(int i = 9; i >= 0; i--) {
        printf("%d ", numeros[i]);
    }

    printf("\n");

    return 0;
}