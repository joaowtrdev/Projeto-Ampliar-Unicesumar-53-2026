/*
    Escreva um programa em C que peça ao usuário o salário e o tempo de trabalho em anos.
    O programa deverá calcular um bônus de 5% sobre o salário se o tempo de trabalho for superior a 5 anos.

    "salario * 0,05"
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {

    setlocale(LC_ALL, "pt_BR.UTF-8");
    system("cmd /c cls");

    int anos;
    float salario, bonus, novoSalario;

    printf("Informe seu salário: ");
    scanf("%f", &salario);

    printf("Quantos anos você tem de trabalho na empresa: ");
    scanf("%d", &anos);

    bonus = salario * 0.05;
    novoSalario = salario + bonus;

    if(anos > 5){
        printf(
            "Parabéns, você ganhou um bônus de R$%.2f\n"
            "Seu novo salario é R$%.2f ", bonus, novoSalario);
    } else {
        printf("Você não tem direito ao bônus!");
    }

    return 0;
}