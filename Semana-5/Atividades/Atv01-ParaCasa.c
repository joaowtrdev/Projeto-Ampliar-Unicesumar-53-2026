/*
    Escreva um programa que leia o nome de um aluno, a idade e 4 notas deste aluno.
    O programa deverá retornar a média dessas notas, o nome e idade do aluno.
    Crie uma struct Aluno.
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

struct Aluno {
    char nome[30];
    int idade;
    float notas[4];
};

int main() {

    struct Aluno aluno1;
    float media = 0;

    printf("Informe o nome do aluno: ");
    fgets(aluno1.nome, sizeof(aluno1.nome), stdin);
    aluno1.nome[strcspn(aluno1.nome, "\n")] = '\0';

    printf("Informe a idade do aluno: ");
    scanf("%d", &aluno1.idade);

    for(int i = 0; i < 4; i++) {
        printf("Informe a %dª nota: ", i + 1);
        scanf("%f", &aluno1.notas[i]);

        media += aluno1.notas[i];
    }

    media /= 4;

    printf(
        "\n\n::: ALUNO :::\n"
        "Nome: %s\n"
        "Idade: %d anos\n"
        "Média: %.2f\n",
        aluno1.nome,
        aluno1.idade,
        media
    );

    return 0;
}