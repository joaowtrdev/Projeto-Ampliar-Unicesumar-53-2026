/*
    Escreva um programa em C que receba o cadastro de 3 alunos contendo nome, idade e 2 notas de uma disciplina.
    O programa deverá calcular a média de cada aluno e escrever na tela informando se ele está aprovado ou reprovado.
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

struct Aluno {
    char nome[30];
    int idade;
    float notas[2];
    float media;
};

int main() {

    setlocale(LC_ALL, "pt-BR.UTF-8");
    system("clear");

    struct Aluno alunos[3];

    for(int i = 0; i < 3; i++) {

        printf("\n::: CADASTRO DO ALUNO %d :::\n", i + 1);

        printf("Informe o nome: ");
        fgets(alunos[i].nome, sizeof(alunos[i].nome), stdin);
        alunos[i].nome[strcspn(alunos[i].nome, "\n")] = '\0';

        printf("Informe a idade: ");
        scanf("%d", &alunos[i].idade);

        for(int j = 0; j < 2; j++) {
            printf("Informe a %dª nota: ", j + 1);
            scanf("%f", &alunos[i].notas[j]);
        }

        alunos[i].media = (alunos[i].notas[0] + alunos[i].notas[1]) / 2;

        getchar();
    }

    printf("\n\n::: RESULTADOS :::\n");

    for(int i = 0; i < 3; i++) {

        printf(
            "\nAluno: %s\n"
            "Idade: %d anos\n"
            "Média: %.2f\n", alunos[i].nome, alunos[i].idade, alunos[i].media
        );

        if(alunos[i].media >= 6) {
            printf("Situação: APROVADO\n");
        } else {
            printf("Situação: REPROVADO\n");
        }
    }

    return 0;
}