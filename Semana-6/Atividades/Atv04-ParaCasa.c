/*
    Escreva um algoritmo que calcule a idade de uma pessoa a partir de sua data de nascimento.
*/


#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {

    setlocale(LC_ALL, "pt_BR.UTF-8");
    system("cmd /c cls");

    int diaNascimento, mesNascimento, anoNascimento;
    int diaAtual, mesAtual, anoAtual;
    int idade;

    printf("Informe o dia do nascimento: ");
    scanf("%d", &diaNascimento);

    printf("Informe o mês do nascimento: ");
    scanf("%d", &mesNascimento);

    printf("Informe o ano do nascimento: ");
    scanf("%d", &anoNascimento);

    printf("\nInforme o dia atual: ");
    scanf("%d", &diaAtual);

    printf("Informe o mês atual: ");
    scanf("%d", &mesAtual);

    printf("Informe o ano atual: ");
    scanf("%d", &anoAtual);

    idade = anoAtual - anoNascimento;

    if(mesAtual < mesNascimento) {
        idade--;
    } else if(mesAtual == mesNascimento && diaAtual < diaNascimento) {
        idade--;
    }

    printf("\nA pessoa possui %d anos.\n", idade);

    return 0;
}