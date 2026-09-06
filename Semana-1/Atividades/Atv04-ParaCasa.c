/*
    Escreva um algoritimo que receba 2 números e multiplique-os, mostrando o resultado na tela.
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){

    int n1, n2, multiplicacao;

    printf("Infome o primeiro numero: ");
    scanf("%d", &n1);

    printf("Infome o segundo nuemero: ");
    scanf("%d", &n2);

    multiplicacao = n1 * n2;

    printf("%d X %d = %d", n1, n2, multiplicacao);

    return 0;
}