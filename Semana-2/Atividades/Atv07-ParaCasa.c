/*
    Escreva um programa que receba 2 números inteiros e multiplique-os.
    O programa deverá informar se o resultado da multiplicação é par ou í­mpar.
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {

    setlocale(LC_ALL, "pt_BR.UTF-8");
    system("cmd /c cls");

    int num1, num2, resultado;

    printf("Informe o primeiro número: ");
    scanf("%d", &num1);
    
    printf("Informe o segundo número: ");
    scanf("%d", &num2);

    resultado = num1 * num2;

    if (resultado % 2 == 0) {
        printf("O resultado da multiplicação é par.");
    } else {
        printf("O resultado da multiplicação é í­mpar.");
    }
    
    return 0;
}