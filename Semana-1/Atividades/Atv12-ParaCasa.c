/*
    Escreva um programa que peça idade, salário e sexo da pessoa e imprima na tela.
*/

#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int main(){

    setlocale(LC_ALL, "pt_BR");
    system("cmd /c cls");

    int idade;
    float salario;
    char sexo;

    printf("Infome sua idade: ");
    scanf("%d", &idade);

    printf("Informe seu salário: ");
    scanf("%f", &salario);

    printf("Informe seu sexo (F/M): ");
    scanf(" %c", &sexo);

    printf("\nIdade: %d\nSalário: %.2f\nSexo: %c", idade, salario, sexo);

    return 0;

}