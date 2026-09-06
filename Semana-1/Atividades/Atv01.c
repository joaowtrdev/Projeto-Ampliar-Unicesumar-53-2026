/*
    Escreva um programa que some 2 números inteiros
*/

#include <stdio.h>

int main(){
    int n1, n2, soma;
    printf("Infome o primeiro numero: ");
    scanf("%d", &n1);

    printf("Infome o segundo numero: ");
    scanf("%d", &n2);

    soma = n1 + n2;

    printf("%d", soma);

    return 0;
}