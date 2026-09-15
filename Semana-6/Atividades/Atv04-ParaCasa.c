/*
    Escreva um algoritmo que calcule a idade de uma pessoa a partir de sua data de nascimento.
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void calcularIdade(int ano) {
    int idade;
    idade = 2026 - ano;

    printf("Esta pessoa tem %d anos\n", idade);
}

int calcularIdade2(int ano) {
    int idadePessoa;
    idadePessoa = 2026 - ano;

    return idadePessoa;
}

int main() {

    setlocale(LC_ALL, "pt_BR.UTF-8");
    system("clear");

    int anoNascimento, idade;

    printf("Informe o ano do seu nascimento: ");
    scanf("%d", &anoNascimento);

    calcularIdade(anoNascimento);

    idade = calcularIdade2(anoNascimento);

    printf("Esta pessoa tem %d anos\n", idade);

    return 0;
}