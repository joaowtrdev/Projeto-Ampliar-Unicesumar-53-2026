/*
    Escreva um algortimo em C que receba:

    Matr√≠cula do Aluno:
    Idade do Aluno:
    Nome do Aluno:
    Endere√ßo do Aluno:

    O programa dever· escrever na tela a ficha completa do aluno, incluindo nome, idade, matricula e endereÁo.
*/


#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    system("cmd /c cls");
    int matricula, idade;
    char nome[50], endereco[100];

    printf("Matricula do aluno: ");
    scanf("%d", &matricula);

    printf("Idade do aluno: ");
    scanf("%d", &idade);

    getchar();

    printf("Nome do aluno: ");
    fgets(nome, sizeof(nome), stdin);
    nome[strcspn(nome, "\n")] = '\0';

    printf("Endereco do aluno: ");
    fgets(endereco, sizeof(endereco), stdin);
    endereco[strcspn(endereco, "\n")] = '\0';

    printf("\nFicha do Aluno\n");
    printf("Matricula: %d\n", matricula);
    printf("Idade: %d anos\n", idade);
    printf("Nome: %s\n", nome);
    printf("Endereco: %s\n", endereco);

    return 0;
}