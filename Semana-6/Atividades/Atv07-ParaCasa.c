/*
    Escreva um programa que receba um número.
    Este programa deverá exibir na tela a tabuada de multiplicação deste número.
    Crie uma subrotina para realizar os calculos.
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int calcularTabuada(int numero, int multiplicador) {
    return numero * multiplicador;
}

int main() {

    setlocale(LC_ALL, "pt_BR.UTF-8");
    system("cmd /c cls");

    int numero;

    printf("Informe um número: ");
    scanf("%d", &numero);

    for(int i = 1; i <= 10; i++) {
        printf(
            "%d x %d = %d\n",
            numero,
            i,
            calcularTabuada(numero, i)
        );
    }

    return 0;
}