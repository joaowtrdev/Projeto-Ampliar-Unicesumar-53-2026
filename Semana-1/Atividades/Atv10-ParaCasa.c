/*
    Escreva um programa que receba o salário de uma pessoa e calcule um aumento de 10%.
*/

#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int main(){

    setlocale(LC_ALL, "pt_BR");
    system("cmd /c cls");

    float salario, aumento;

    printf("Informe seu salário: ");
    scanf("%f", &salario);

    aumento = salario * 0.10;

    printf("Seu aumento é de: %.2f", aumento);

    return 0;
}