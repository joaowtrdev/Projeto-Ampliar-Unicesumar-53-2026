/*
    Escreva um programa que calcule a idade de uma pessoa
    Crie as variáveis anoAtual, anoNascimento e idade e calcule a idade.
*/

#include <stdio.h>
#include <locale.h> //Biblioteca Padrão de Localização - Standard Locale . Header

int main(){

    int anoAtual, anoNascimento, idade;

    printf("Digite o ano atual: ");
    scanf("%d", &anoAtual);

    printf("Digite seu ano de nascimento: ");
    scanf("%d", &anoNascimento);

    idade = anoAtual - anoNascimento;

    printf("Sua idade = %d", idade);

    return 0;
}