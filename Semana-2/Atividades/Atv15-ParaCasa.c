/*
    Escreva um programa que receba um número e calcule a raiz quadrada dele.

    Dica: https://petbcc.ufscar.br/manual-c/biblioteca/math/
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

int main() {

    setlocale(LC_ALL, "pt_BR.UTF-8");
    system("cmd /c cls");

    float num, raizQuadrada;

    printf("Informe um número: ");
    scanf("%f", &num);

    if(num >= 0) {
        raizQuadrada= sqrt(num);
        printf("A raiz quadrada de %.0f é %.0f", num, raizQuadrada);
    } else {
        printf("Não é possivel calcular a raiz quadrada desse nnúmero");
    }

    return 0;
}