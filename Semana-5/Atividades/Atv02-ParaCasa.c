/*
    Escreva um programa em C que receba o cadastro de 3 alunos contendo nome, idade e 2 notas de uma disciplina.
    O programa deverá calcular a média de cada aluno e escrever na tela informando se ele está aprovado ou reprovado.
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

#define MAXNOTAS 2
#define MAXALUNOS 2

typedef struct {
    char nome[30];
    int idade;
    float notas[MAXNOTAS];
    float media;
} TipoAluno;

int main() {

    setlocale(LC_ALL, "pt_BR.UTF-8");
    system("clear");

    TipoAluno alunos[MAXALUNOS];
    float somaNotas;

    for(int i = 0; i < MAXALUNOS; i++) {
        printf("Informe o NOME do %d° Aluno: ", i + 1);
        fgets(alunos[i].nome, sizeof(alunos[i].nome), stdin);
        alunos[i].nome[strcspn(alunos[i].nome, "\n")] = '\0';

        printf("Informe a idade do aluno %s: ", alunos[i].nome);
        scanf("%d", &alunos[i].idade);

        for(int j = 0; j < MAXNOTAS; j++) {
            printf("Informe a %d° nota do aluno %s: ", j + 1, alunos[i].nome);
            scanf("%f", &alunos[i].notas[j]);
            getchar();

            if(j == 0) {
                somaNotas = alunos[i].notas[j];
            } else {
                somaNotas += alunos[i].notas[j]; // somaNotas = somaNotas + aluno1.notas[i]
            }
        }
        
        alunos[i].media = somaNotas / MAXNOTAS;
        system("clear");
    }

    for(int i = 0; i < MAXALUNOS; i++) {
        printf(
        "\n::: Aluno :::\n"
        "Nome: %s\n"
        "Idade: %d\n"
        "Média: %.2f\n", alunos[i].nome, alunos[i].idade, alunos[i].media
        );

        // if(alunos[i].media >= 6) {
        //     printf("Aprovado\n");
        // } else {
        //     printf("Reprovado\n");
        // }

        alunos[i].media >= 6 ? printf("Aprovado\n") : printf("Reprovado\n");
    }

    return 0;
}