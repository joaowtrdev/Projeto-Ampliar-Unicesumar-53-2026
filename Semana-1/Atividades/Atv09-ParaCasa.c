/*
    Escreva um programa que receba o salário de um funcionário e
    calcule quanto ele precisa pagar de imposto de renda (aliquota 25% sobre salário)
*/

#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int main(){

    setlocale(LC_ALL, "pt_BR");
    system("cmd /c cls");
    float salario, impostoRenda;

    printf("Infome seu salário: ");
    scanf("%f", &salario);

    impostoRenda = salario * 0.25;

    printf("Valor de imposto de renda a pagar: %.2f", impostoRenda);

    return 0;
}