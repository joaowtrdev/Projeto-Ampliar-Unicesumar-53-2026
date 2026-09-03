/*
    Faça um programa em C que escreva em ordem decrescente todos os anos pares
    entre 2024 e 1990.
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    for (int i = 2024; i >= 1990; i--)
        if(i % 2 == 0) {
            printf("%d\n", i);
        }
}