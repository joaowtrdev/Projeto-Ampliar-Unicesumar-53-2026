/*
    Escreva um programa que leia o nome de um aluno, a idade e 4 notas deste aluno.
    O programa deverá retornar a média dessas notas, o nome e idade do aluno.
    Crie uma struct Aluno.
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

#define MAXNOTAS 4

typedef struct {
    char nome[30];
    int idade;
    float notas[MAXNOTAS];
} Aluno;

int main() {

    setlocale(LC_ALL, "pt_BR.UTF-8");
    system("clear");

    Aluno aluno1;
    float media, somaNotas;

    printf("Informe o nome do Aluno: ");
    fgets(aluno1.nome, sizeof(aluno1.nome), stdin);
    aluno1.nome[strcspn(aluno1.nome, "\n")] = '\0';

    printf("Informe a idade do aluno %s: ", aluno1.nome);
    scanf("%d", &aluno1.idade);

    for(int i = 0; i < MAXNOTAS; i++) {
        printf("Informe a %d° nota do aluno %s: ", i + 1, aluno1.nome);
        scanf("%f", &aluno1.notas[i]);

        if(i == 0) {
            somaNotas = aluno1.notas[i];
        } else {
            somaNotas += aluno1.notas[i]; // somaNotas = somaNotas + aluno1.notas[i]
        }
    }

    media = somaNotas / MAXNOTAS;

    printf(
        "\n::: Aluno :::\n"
        "Nome: %s\n"
        "Idade: %d\n"
        "Média: %.2f", aluno1.nome, aluno1.idade, media
    );

    return 0;
}